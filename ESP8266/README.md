# ESP8266

## Overview

The following set of Arduino projects are samples wich most of the times will setup your board to communicate with __sampleAPIbasic__ and set the end device status in the platform. 

:warning: _**NOTE:** The following code has been adapted for educational porpouses. Some methods has been over-simplified to be more illustrative. This code does not meet best practices, which means is not recomended for Productive environments._:warning:

## Setup notes

Although ESP-boards are VS-code friendly, the following samples are intended to be compiled and uploaded using the arduino IDE, all instructions assumes this statement.


1) The following url `http://arduino.esp8266.com/stable/package_esp8266com_index.json` has to be added using the _**File > preferences > aditional board manager URLs:**_ option. 

2) Install the libraries for this board selecting _**Tools > Board > Boards manager...**_ 

3) Once selected, a pop-up menu will come, click on the input box and type _`esp8266`_, this will filter the list of items displayed.

4) Locate the _esp8266 community_ library and click the `install` button. (make sure the version is equal or greater than 3.0.0).

5) Wait a couple minutes until the installation finishes, once done, click the `ok` button.

6) Select the right board by selecting  _**Tools > Board > ESP8266 Boards : > NodeMCU 1.0 (ESP-12E Module)**_.

7) Connect your ESP to the usb port, a sound (system notification) will be triggered. 

8) Select the port for the board in  _**Tools > Port**_. 

9) Test the setup by uploading a program, you can use the upload button or `ctrl-u`. [Blinky sample is probably the best choice here](https://github.com/clutso/talleriotredessat/tree/master/ESP8266/blinky)
