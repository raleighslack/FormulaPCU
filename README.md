# FormulaPCU
Formula 1 style dashboard, based on the Motion Applied PCU-700. It uses a STM32H7R7L8H6H with 64Mb of OctoSPI Flash, and 32Mb of 16-line HyperSPI PSRAM. It has a standard 40-pin LCD connector, designed to connect to a 4.3" 800x480 TFT Display. It has 21 SK9822-A LEDs acting as shifting lights. It is programmed with TouchGFX and FreeRTOS. Mechanical design is currently in progress.


# PCB
For this project a 6-layer custom PCB was designed in Altium. It has 3 BGA chips, and is able to communicate via USB for use in a racing simulator, or over CAN for use with a real car.
## Please click the image to open a PCB viewer
<a href="https://personal-viewer.365.altium.com/client/index.html?feature=embed&source=848C32DD-2C89-4B6B-A243-CC383B027472&activeView=3D">
  <img src="https://i.postimg.cc/W4Sn8QmG/image.png" alt="FormulaPCU PCB" width="1200" style="display: block; margin: auto; width: 50%;">
</a>
