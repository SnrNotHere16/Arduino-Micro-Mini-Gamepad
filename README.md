# Arduino-Micro-Mini-Gamepad
<img src = "Microgamepadimages/Joystick.jpg" width= "500" >
<img src = "Microgamepadimages/pro-micro-fc73b3fa.png" width= "500" >
This project uses the hitletgo promicro (atmega32u4). I used this mcu because it has an hid (human interface device) library and it is cheap. 
This project was inspired from my previous fightstick project, which used the tiva c tm4c123 
https://github.com/SnrNotHere16/ArcadeStickWithScreen 

My motivation was to create a fightstick that I could play fighitng games like Street Fighter. 
Although my fight stick worked perfectly on emulators, it did not register properly on Steam. 
Because I could not get the fightstick to work, I figured that if I created a hid keyboard 
device then steam should be able to register the commands properly. 
# Arduino-Micro-Mini-Keyboard on Steam 
<img src = "Microgamepadimages/JoystickandGame.jpg" width= "500" >
Here is an image of me using the gamepad on Street Fighter 30th Anniversary Collection
<img src = "Microgamepadimages/StreetfighterKeyboardLayout.jpg" width= "500" >
Here is an image of the keys assigned to each button though I may change this in the future. 
https://github.com/SnrNotHere16/Arduino-Micro-Mini-Gamepad/blob/main/microGamePad/microGamePadFinal.ino
I decided to incorporate a keyboard that uses the arrow keys instead of "awsd" as well. 
