#include <Dynamixel2Arduino.h>
#include <Adafruit_HX711.h>

// OpenRB-150 has DYNAMIXEL TTL bus on Serial2
#define DXL_SERIAL   Serial2
#define DEBUG_SERIAL Serial
const uint8_t DXL_DIR_PIN = -1; // OpenRB-150 doesn't need a DIR pin

const uint8_t DXL_ID = 1;
const float DXL_PROTOCOL_VERSION = 2.0;

Dynamixel2Arduino dxl(DXL_SERIAL, DXL_DIR_PIN);

using namespace ControlTableItem;

// Adafruit HX711 setup for two load cells
const int LOADCELL1_DOUT_PIN = 2;
const int LOADCELL1_SCK_PIN = 3;
const int LOADCELL2_DOUT_PIN = 4;
const int LOADCELL2_SCK_PIN = 5;
Adafruit_HX711 scale1;
Adafruit_HX711 scale2;

// Define safe servo range to avoid mechanical overextension
const int32_t safeMinPosition = 0;    // Minimum safe position (Use degrees)
const int32_t safeMaxPosition = 170; // Maximum safe position (Use degrees)

// Define gripper geometry constants for reference (if needed)
const float maxOpening = 47.0;  // mm: maximum gripper opening at full range

// Force threshold for stopping the gripper (adjust as needed)
const float forceThreshold = 370.0; //In grams Example threshold, adjust based on your load cell

void setup() {
  DEBUG_SERIAL.begin(115200);
  dxl.begin(1000000); // OpenRB-150 uses 1Mbps by default
  dxl.setPortProtocolVersion(DXL_PROTOCOL_VERSION);
  dxl.ping(DXL_ID);

  // Turn off torque when configuring
  dxl.torqueOff(DXL_ID);
  dxl.setOperatingMode(DXL_ID, OP_POSITION);
  dxl.torqueOn(DXL_ID);

  // Adafruit HX711 setup
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  if (!scale.is_ready()) {
    DEBUG_SERIAL.println("HX711 not found.");
    while (1);
  }
  scale.set_scale(); // Set scale if you have a known calibration factor
  scale.tare();      // Reset the scale to 0

  // Set up potentiometer pin
  pinMode(D15, INPUT);//Not sure if this is the right pin-number
}

void loop() {
  // Read the potentiometer value (0 to 1023)
  int potValue = analogRead(D15);

  // Map the potentiometer value to the safe position range
  int32_t targetPosition = map(potValue, 0, 1023, safeMinPosition, safeMaxPosition);

  // Read the current position
  int32_t currentPosition = dxl.getPresentPosition(DXL_ID, UNIT_DEGREE);

  // Read force from load cell
  float force = scale.get_units();

  // Move the gripper if force is below threshold
  if (force < forceThreshold) {
    dxl.setGoalPosition(DXL_ID, targetPosition);
  }

  // Calculate the corresponding gripper opening (for debugging)
  float opening_mm = ((currentPosition - safeMinPosition) / float(safeMaxPosition - safeMinPosition)) * maxOpening;

  // Debug output
  DEBUG_SERIAL.print("Potentiometer: ");
  DEBUG_SERIAL.print(potValue);
  DEBUG_SERIAL.print("  ->  Position: ");
  DEBUG_SERIAL.print(currentPosition);
  DEBUG_SERIAL.print("  ->  Opening: ");
  DEBUG_SERIAL.print(opening_mm);
  DEBUG_SERIAL.print(" mm  ->  Force: ");
  DEBUG_SERIAL.print(force);
  DEBUG_SERIAL.println(" units");

  delay(15);  // Small delay for smooth operation
}
