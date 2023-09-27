---
icon: simple/arduino
---

!!! arduino

    ### Arduino IDE

    This example assumes you are using the latest version of the Arduino IDE on your desktop. If this is your first time using Arduino IDE and an library, please review the following tutorials.

    - [Installing the Arduino IDE](https://learn.sparkfun.com/tutorials/installing-arduino-ide)
    - [Installing an Arduino Library](https://learn.sparkfun.com/tutorials/installing-an-arduino-library)

    ### USB-to-Serial Drivers

    If you've never connected an CH340 device to your computer before, you may need to install drivers for the USB-to-serial converter. Check out our section on "[How to Install CH340 Drivers](https://learn.sparkfun.com/tutorials/sparkfun-serial-basic-ch340c-hookup-guide#drivers-if-you-need-them)" for help with the installation.




#### Install Board Definition
Install the latest <b>ESP32</b> board definitions in the Arduino IDE.

<div class="alert alert-info">
    <p><b>Note:</b> For more instructions, users can follow this tutorial on <a href="https://docs.arduino.cc/learn/starting-guide/cores">Installing Additional Cores</a> provided by Arduino. Users will also need the <code>.json</code> file for the Espressif Arduino core:</p>
    
    <p><center>
        <a href="https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json"><code>https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json</code></a>
    </center></p>
</div>

<!--When selecting a board to program in the Arduino IDE, users should select the **SparkFun ESP32 Thing Plus C** from the Tools drop down menu *(i.e. **Tools** > **Board** > **ESP32 Arduino** > **SparkFun ESP32 Thing Plus C**)*. Alternatively, users can also select the **ESP32 Dev Module**; however, they may loose some pin assignments (i.e. `LED_BUILTIN`).

-> [![Board Selection](https://cdn.sparkfun.com/r/600-600/assets/learn_tutorials/2/3/5/3/board_selection.png)](https://cdn.sparkfun.com/assets/learn_tutorials/2/3/5/3/board_selection.png) <-
-> *Selecting the **SparkFun ESP32 Thing Plus C** from the Tools drop down menu in the Arduino IDE. (Click to enlarge)* <-

<div class="alert alert-info">
    <p><b>Note:</b> In the Arduino 2.0.x IDE users can also select the board from the <code>Select Board</code> drop down menu and search for the <b>SparkFun ESP32 Thing Plus C</b>:</p>
    
    <p><center>
        <a href="https://cdn.sparkfun.com/assets/learn_tutorials/2/3/5/3/arduino2-board_selection.png"><img alt="Arduino 2.0.x" src="https://cdn.sparkfun.com/r/500-500/assets/learn_tutorials/2/3/5/3/arduino2-board_selection.png"></a>
        <br>
        <i>Selecting the <b>SparkFun ESP32 Thing Plus C</b> in the Arduino 2.0.x IDE. (Click to enlarge)</i> 
    </center></p>
</div>

-->




