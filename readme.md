## Table of Contents
1. [General Info](#general-info)
2. [Live Demo](#live-demo)
3. [Hardware](#Hardware)
4. [Features](#features)
### General Info
***
RGB LEDs are pretty ideal for indoor/outdoor decoration at Diwali festivals, Christmas, parties, weddings and other events. The light changes colour and speed automatically and periodically depending on our selection. It has multi-colour light changer with 16 different colours as well as primary colours RGB (red, green, blue). By mixing the primary colours red, green and blue at different level of intensities, one can create amazing LED mood lightings with DIY achieving millions of colour results. This is the main concept of RGB LEDs. The RGB LED is actually made up of three LEDs, red, green and blue, in one housing. Three PWM(Pulse width modulation) outputs are used to control the RGB LED. A PWM value of 0.0 means turned off for each colour LED and value of 1.0 is turned on completely. This allows one to programmatically modify both the colour and brightness of the LEDs. Usually, RGB LEDs have four pins. One for the common pin and three for LEDs. Of the LEDs shown below, the common pin is the longest pin. RGB LEDs can be classified as either a common anode or a common cathode. The common pin of an RGB LED with a common anode is connected to VCC and the common cathode is connected to ground.’


## Live Demo 
***


* Documentation Link: https://drive.google.com/file/d/1OvvKcU5UTMtlWImYfdGqLr0CL434ZvRE/view?usp=sharing
* Demo Link: https://drive.google.com/file/d/1ZUosP2J1CojPt3vyNJmCVLxTpl0Vqq1o/view?usp=sharing

## 


### Screenshots
* Arduino Board

![Screenshot](./screenshots/arduino%20board.PNG)

* Circuit Diagram

![Screenshot](./screenshots/full%20circuti.PNG) 

* Wheel app used

![Screenshot](./screenshots/wheel%20app.PNG)

* Voice App Used

![Screenshot](./screenshots/voice%20app.PNG)

* Demo photo

![Screenshot](./screenshots/demo%20photo.PNG)



## Hardware
***
A list of technologies used within the project:
* Arduino Board
* Jumper Wires
* RGB LEDS
* Breadboard 
* Hc05 Bluetooth Module
* 5V Adapter


## Features
***
RGB-Fiddler features:
* Inside the RGB led, there are three more LED’s. So by changing the brightness of these LED’s, we can obtain many other colors. To change brightness of RGB led, we can use the PWM pins of Arduino. The PWM pins will give signal different duty cycles to the RGB led to obtain different colors.
* Since the HC-05 module emulates a serial interface, it is programmable using the Software Serial Arduino library. Data is received in series, one character at a time, so writing post-processing code is necessary.
* Also before uploading code to Arduino, disconnect transmission and reception pins of the HC-05 from Arduino, otherwise the upload will fail.
* Now we will pair up a smartphone with the HC-05 Bluetooth module. HC-05 is compatible with Android but not with iOS. All you need to is turn Bluetooth on and connect your Android device (phone, tablet) to the HC-05 module. The RGB color wheel in the android app will help you in selecting different colors for Arduino RGB led.
* The Rx pin in HC-05 will receive the signals from the android app and the Tx pin will transmit these signals to the Arduino code which will use these signals to run its code and change the color of the LED as desired.


## 



## Conclusion


Our model worked successfully and we were able to colour-tune the RGB LED to the colour we desired by using the colour wheel and we were also able to control the LED using the voice recognition app and change its colour by saying the name of the colour we want.


## 