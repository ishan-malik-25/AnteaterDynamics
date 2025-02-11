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






