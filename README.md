# Anteater Dynamics 7DOF Robot Blog

Welcome to our GitHub Page! We are a team of six undergraduate engineers working with our industry sponsor ROBOTIS to develop a 
7-degree-of-freedom robotic arm to be used by robotics enthusiasts and to help in data collection to be used to 
further develop robotics systems. This page will document our team's progress throughout the lifespan of our project
and will include any files, simulations, documents, or other relevant information pertaining to our project.

Team members:

Rogel Aguilar - Mechanical Engineering Major, Software Subteam - https://www.linkedin.com/in/rogelagui/

Diego Avila - Mechanical Engineering Major, Software Subteam

Lucas Cardona - Mechanical Engineering Major, Mechanical Subteam - https://www.linkedin.com/in/lucas-cardona/

Noah Castillo - Mechanical Engineering Major, Electrical Subteam - https://www.linkedin.com/in/noahscastillo/

Ishan Malik - Mechanical Engineering Major, Mechanical Subteam - https://www.linkedin.com/in/ishanmalik1/

Tomas Mejia - Mechanical Engineering Major, Electrical Subteam 

----------------------------------------------------------------------------------------------------------------------------------

Update 2/20/2025 - Ishan

FEA on our custom end effector brackets has been completed. We were discussing manufacturing materials for custom components, and had considered either 1060 Aluminum or ABS plastic. The project intention is to design the robot for at home manufacturing as well as mass production, and thus want to emphasize additive manufacturing technologies. However, we were concerned that certain connecting components may need a stronger aluminum material to handle the loads. However, the simulation results show that a simple ABS plastic is structuraly sound even under a 2X scaled load. In the simulation, the bracket assembly is subjected to a 12 N force acting on the four bracket screw holes. Using aluminum, the maximum displacement is only 0.00063 mm, and for ABS the maximum displacement is 0.022955 mm. Such a small displacement, even using ABS, has proven that using ABS plastic is sufficient for our custom bracket.

![image](https://github.com/user-attachments/assets/60c3b263-fe6d-4e85-9054-56020f516c4a)

Displacement Results of Bracket Assembly using ABS

![image](https://github.com/user-attachments/assets/fdde9bb3-f93c-4a47-a646-2ab9a32d5dcc)

Displacement Results of Bracket Assembly using 1060 Aluminum



Update 2/20/2025 - Ishan

More progress has been made on the CAD, mainly on the base design - changing it from a simple circular plate to a more realistic
final design. See the picture below. Also finite element analysis (FEA) work has begun to optomize the shape of the linkage arms to
resist bending, I have also attached a few images of FEA results for the original linkage arm cross section seen in the previous
CAD models as well as one for an H-Beam. More shape iterations are currently in progress.

![image](https://github.com/user-attachments/assets/08d850e3-d082-4446-bb39-771a2fc63d10)
New Base first Revision - Packaging of RB-150 and Base Servo, Holes for Bolting/Clamping

![image](https://github.com/user-attachments/assets/1798d9d4-c846-47d8-9939-0e955c9f081e)
Original Cross Section FEA Displacement with 2N Point Force Applied

![image](https://github.com/user-attachments/assets/c0dae856-4a53-4b73-aecc-f96dd9aa1642)
H-Beam FEA Displacement Results with 2N Point Force Applied 

----------------------------------------------------------------------------------------------------------------------------------

UPDATE 2/10/2025 - Ishan

More progress has been made on the CAD (RevC) as we are finalizing the selection of the Dynamixel X servos being used in our arm. 
We were having trouble balancing the 7DOF functionality desire with the budget we are targeting and as such have changed some of the
servos used. Previously, all of the servos were from the XM line, but we had to change this to incorporating servos from the 
XC, XM, and XL lines to balance our cost and functionality requirements. We also changed the last servo in the linkage from two
separate servos to a single 2-axis XC-430 servo to save both cost and weight at the end of the linkage. An updated CAD model can
be seen below. The pink servos are XC-430, the green servo is XM-430, the orange is XL-430, and the light blue is the 2-axis 2XL-430.
Additionally, we have uploaded a copy of our project problem definition presentation to the site to be viewed!

![image](https://github.com/user-attachments/assets/4f914cf7-e202-4953-8d55-91a6a3bd2d4a)
Robotic Arm RevC
![image](https://github.com/user-attachments/assets/797dac44-ca3c-487c-af4b-aa5b8782c256)
Dynamixel X Servo Decision Matrix



----------------------------------------------------------------------------------------------------------------------------------
UPDATE 2/4/2025 - Ishan

Progress has been made on the CAD! See the attached photos. The assembly now uses all ROBOTIS actuators and frames.
The servos in the assembly are not specified as they will be in the final assembly as calculations need to be done to ensure
that stall torques are not achieved on any servos. The ROBOTIS form factors for the servos are all ROBOTIS 430 dimensions except for the base 
servo which is 540 dimensions. The overall reach of the arm is now ~655mm, but this can be adjusted by varying the length of the links 
once more robot kinematics are further validated. The arm as shown in the picture has 6 degrees of freedom, with one degree of
freedom reserved for the end effector that is still being developed. Link cross-sections are also yet to be optimized. This
will be done in the coming weeks using FEA once the lengths are more final, so we know what types of forces and moments are 
being experienced by the links on the arm. Note this is Revision B of the CAD; Revision A did exist between the preliminary CAD
and RevB but was mostly used to integrate ROBOTIS servos and frames, while RevB is more representative of our project objectives.

![image](https://github.com/user-attachments/assets/3b2c168e-9bb8-4743-acd5-a539ca30f30f)

Robotic Arm RevB

![image](https://github.com/user-attachments/assets/de68abb7-bbc5-42ca-8475-54eb8ce5b5d1)

Overall Arm Reach at Current Revision

----------------------------------------------------------------------------------------------------------------------------------

1/29/2025

![image](https://github.com/user-attachments/assets/662b1808-5397-41b4-819f-1123b2ad2507)

Preliminary Linkage






