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
<img src = "Microgamepadimages/LayoutASWD.jpg" width= "500" >
<img src = "Microgamepadimages/StreetfighterKeyboardLayout.jpg" width= "500" >
Here is an image of the keys assigned to each button though I may change this in the future.  <br /> 
https://github.com/SnrNotHere16/Arduino-Micro-Mini-Gamepad/blob/main/microGamePad/microGamePadFinal.ino <br /> 
<img src = "Microgamepadimages/LayoutWDirectionalKeys.jpg" width= "500" >
<img src = "Microgamepadimages/keyboardWarrowkeys.jpg" width= "500" >
I decided to incorporate a keyboard that uses the arrow keys instead of "awsd" as well. <br /> 
https://github.com/SnrNotHere16/Arduino-Micro-Mini-Gamepad/blob/main/microGamePad/microGamePadFinalWdirectionalkeys.ino

# Breadboard prototype (Fritzing)
<img src = "Microgamepadimages/MicroProFightStickSchematicBreadboard_bb.jpg" width= "500" >

# Schematic (Circuit Maker)
<img src = "Microgamepadimages/MicroProFightStickSchematic.JPG" width= "500" >

# PCB Design (Circuit Maker)
<img src = "Microgamepadimages/MicroProFightStickPCB2D.JPG" width= "500" >
<img src = "Microgamepadimages/MicroProFightStickPCB3D.JPG" width= "500" >
<br /> 

# First PCB image
I sent the gerber files from circuit maker to JLCPCB and got my board printed out and shipped. 
<img src = "Microgamepadimages/FirstPCBimage.jpg" width= "500" >
<img src = "Microgamepadimages/FirstPCBsimage.jpg" width= "500" >
<img src = "Microgamepadimages/FirstPCBSoldered.jpg" width= "500" >
<img src = "Microgamepadimages/FirstPCBImageOneButtonTest.jpg" width= "500" >
<img src = "Microgamepadimages/FirstPCBimageConnection.jpg" width= "500" >


# Help 
https://www.youtube.com/watch?v=U0oaebN8pbc <br />
https://github.com/shveytank/Arduino-Game-Controller
