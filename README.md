# Pulse Watch and Vest

## Problem Background
Heart Disease is the leading cause death constituting 31% of the total deaths in the world and therefore early diagnosis is a critical for its appropriate treatment.Some of the early symptoms of any kind of heart diseases are associated with abnormal heart rhythms which cannot be naturally felt by the person himself until it becomes major and affects the body.

A regular heart rythm has a familiar pattern but when your heart beats irregularly then its called an arrythmia. It doesn't means it's beating too fast or too slow it just means its beating out of its normal rythm and that can cause problem. THe most common problem due to arrythmia is atrila fibrillation or A-fib and it affects tens of million of people and is leading cause of heart stroke. The challenge is that if we can develop a device that is user freindly and can detect these small variations in heart activity so that degradation in heart health can be detected at an early stage and effective treatment can be taken.

## Introduction
Pulse is a heart rhythm monitoring band and Vest solution for both normal users and heart patients that put the complete mechanism of ECG, PPG - heart monitoring and physical activity tracking together assisted with Machine learning and Cognitive thinking system to collect data on irregular heart rhythms and notify users who may be experiencing atrial fibrillation (AFib), Tachycardia, Bradycardia, Missed beats or any other heart conditions. Pulse Watch & Vest can predict the risk of heart attack, stroke, cardiac arrest and other deadly heart diseases by monitoring various parameters of the heart like Rhythm, Beats per minute, Depolarization-Polarization cycle, blood pumping intensity, recovery rate throughout the day. The system employs Machine learning and becomes smarter and more accurate day by day with usage and number of diverse users.

## Features

* Both pulse Watch and Vest are available for the same use but the Vest is specially designed for the already diagnosed heart patients because it provides more accurate data on heart rhythms and gives higher resolution in ECG graphs due to the placement of electrodes near the heart to make sure that even smaller variation will not go undetected. 

* For the patients suffering from arrhythmia the app notifies up to 5 selected people if the user gets sudden heart attack via SMS so that required help can be received within the golden time period.

* Pulse Watch can be used by normal users to keep check on their heart health and predict the possibility of coronary artery disease. It also features a pill tray which stores the medicine "Sorbitrate" that works is life saver during a heart attack. 

* The devices work by pairing with an android application that displays the health statistics of the user and also give critical notification if the person is suffering from heart disease. 

## Hardware and Software(How to build one?)

Let’s get started with the Hardware part first. For the watch and Vest module, I have printed a 3D case which comprises of all the sensors and microcontrollers in an alignment so that it could fit properly and gives better results.

The sensors and controller in Watch and Vest module used are :-
* Teensy 3.2 development board(Watch)
* Arduino Mini Controller(Vest)
* 0.96 inch 128x64 OLED display(Watch)
* 3 small rectangular Copper plates acting as electrodes(Watch)
* 3 large rectangular Copper plates acting as electrodes(Vest)
* MAX30105 particle sensor(Watch)
* AD8232 Single Lead Heart Rate Monitor(Watch and Vest)
* MPU6050 Accelerometer and Gyroscope(Watch)
* HC05 Bluetooth module(Watch and Vest)
* Battery pack Lithium-Polymer(Watch and Vest)

Individuals connections of sensors, batteries to controllers could be found easily on simple google search. So that’s not included here.
After completing all the connections and fitting components inside the case, you could fire up the Arduino IDE and start the software part of this project.

Primarily, you have to load all the libraries given above in the Code/library section. After loading them, open the final_watch.ino file in the Code section and connect your Teensy board in watch with the computer via a usb cable. Hit the shortcut Ctrl+U or Upload option and the code gets loaded in the board without any errors. If there are any, ask me in Issues.

Here the watch part is completed and for the Vest controller repeat the same steps as above in watch but here we use the final_vest.ino file and Vest module will be ready for functioning. 

Here your software part is also done. Now you open up the Pulse App provided in this project and prior to opening up the app, you have to pair your smartphone Bluetooth with the Watch and same for Vest. Now go back to app and complete the login or registration process after which a connect option is displayed in the app which you have to select and there you have everything setup and able to use Pulse Watch and Vest.
 
## Gallery

![Alt Text](https://github.com/bharat8/Pulse-Watch_and_Vest/blob/master/Gallery/IMG_3381.png)
## Video Link


