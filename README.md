A Project Report on

**Gesture Controlled PPT Slide Show**

**Submitted by**

                                Kayalvizhi Jayavel, Sai Santhiya, Hari Baabu, Anitha

**Submitted to**

**as a part of**

**iB Hubs IoT Bootcamp '18, Chennai**

**Date: 18-07-2018**

**Acknowledgement**

We take the opportunity to express our reverence to iB Hubs for their guidance, inspiration and innovative technical discussions during this work.

We thank the iB Hubs team for their constant guidance and support. They have been great sources of inspiration to us.

We would like to thank all our friends and especially our fellow participants for all the thoughtful and mind stimulating group interactions we had, which prompted us to think beyond the obvious.

**Abstract**

As academicians, the application which is close to us is the powerpoint slides. Usually slide movements are through clicks, be it keyboard or mouse, be it wired or wireless. We wanted to deploy a system which can react to hand gestures. This project also demonstrates how one can control  computer keyboard and mouse events via virtual keypad. The objective of this is gesture control for PowerPoint presentation.

# I.            Introduction

As technology enters the classroom more and more each year, there are always new innovations being brought into the fold that can help teachers to get their points across better, and help students learn more efficiently. One such tool that has been utilized in the classroom for some time now and continues to be used heavily is the Microsoft PowerPoint program.

This program is one that enables teachers and students alike to prepare presentations. When used effectively, PowerPoint can really enhance teacher presentations and the overall comprehension of students. It is a program that allows teachers to present their lessons in a more dynamic way than simply lecturing and writing on the blackboard.

PowerPoint has become very popular because it's easy to learn and widely available. It provides the ability to equip your presentations with different types of media - including images, sounds, animations, and much more. This enhances the students' abilities to retain what they're being taught, especially those who are visual learners. Teachers can focus on the class and interacting with the students instead of writing on a board, because the text and the entire presentation is already there in the form of a PowerPoint file.

PowerPoint is not just for the teachers though, another way to use PowerPoint in an educational setting is to have the students create their own presentations. This is a great way to teach them how to use visual aids while working on their presentation and public speaking abilities.

# II.            Approach

1. One ESP8266 will be connected to velostat conduction fabric.
2. Another ESP8266 will be connected to the system/laptop in which PPT slide show is set up.
3. A python script for virtual keypad mapping to gesture runs in the same system (step 2)
4. Thus the gestures are communicated via Wi-Fi to the system and slides are moved accordingly.

# III.            Hardware, Software and cloud platforms used

**Hardware :**

* Octabrix
* Velostat, Conductive Fabric

**Software :**

* Arduino IDE
* Python

# IV.            Features of the project

## A.      Interactive and dynamic user interface

It is important to note that when used incorrectly, PowerPoint presentations can actually be less effective than regular, old-fashioned teaching methods.

Many a times teacher have to manually be near or (ask a person to click) their devices to move slides through.

Even in wireless pointers, there is need for clicks.

A wearable with a mild hand gesture would be a stylish and useful solution.

## B.      Wearable solution

1. This project comes handy as a wearable because of the use of conductive fabric with velostat. Thus, this product will be very useful for academicians, trainers, project managers or in short anyone who will use powerpoint shows to present their ideas.

# V.            Step by Step implementation

## **A.** **Module 1:  Client**

## Conductive fabric, velostat

## The client will be interfaced with flex sensor. The hand gesture is measured based on the angle of flex sensor. The project  is completed left and right movement and the angle is calibrated accordingly. The input acquired for sent to the server via Wi-Fi module.

                        **Algorithm:**

1)  Set up Wi-Fi using ESP8266

2)  Begin setup conversation directed to the server.

3)  The information sent to the server will indicate the left or right direction based on the flex sensor movement.

## **B.** **Module 2:   Server**

## The server receives the signal via Wi-Fi server code and continuously listen  to handle client .The gesture based on angle triggers the methods namely left or right and populates the same in the serial monitor.

                        **Algorithm:**

1)  Set up Wi-Fi using ESP8266

2)   Initialize server to listen port 80

3)   Start the Server to serve and handle the client request

4)  Analyze the direction result from the client,  report with success message(200) and the information about the key to be mapped.

## **C.** **Module 3:  Python script (Key Mapper)**

## The python script leads the feed from the serial monitor and the virtual key map is performed using pyserial whereby the signals are provided to powerpoint slide show to move forward  or backward

                        **Algorithm (Key Mapper)**

1)  Listen the serial COM port at appropriate baud rate.

2)  Wait for serial monitor to respond

3)   Read data, analyze for direction keyboard and more accordingly from left to right.

4)  Continue step2, till exit

# VI.            Future scope of the project

To increase the usefulness of the project, we can deploy this to control TV remotes etc.

# VII.            Constraints for real time deployment

PowerPoint Presentation Control in Classroom Teaching by hand gesture is a project in which slides can be controlled by simple hand gestures. The user needs to wear a gesture device which includes a sensor. The sensor will record the movements of hand in a specific direction which will control the slides in the manner we want. The slides and the gesture device communicate through RF transmission and reception.

              Our project "PowerPoint Presentation control in classroom teaching by hand gesture" helps in controlling powerpoint presentation from a distance. It also reduces human effort. Use of gestures would make the presenter to handle the presentation more easily. The controlling of powerpoint presentations by hand gesture using flex sensor. It can be done with an ease to move direction from to left to right.

# VII.            References

1. Power Point Presentation Control in Classroom Teaching by Hand Gesture A.N.Paithane1 , Monika Marathe2 , Apurva Shelar3 .
2. https://medium.com/iotforall/how-gesture-control-will-transform-our-devices-32f457a6d25.
3. https://mro.massey.ac.nz/bitstream/handle/10179/7580/02 whole.pdf
