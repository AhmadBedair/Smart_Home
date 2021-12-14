# Smart-Home

## The IDEA:
  We want to make our homes smart so, we implement a circuit that control
  Light and temperature in our home. First, we put a motion sensor (PIR)
  that detect the motion and went the motion detected it sends a signal that
  Terns on the LED. second, we put another heat sensor that sends a
  signal to the motor (like a fan) when the temperature is higher than 30
  degrees so, simply the led turns on when there is a motion and the motor
  turns on when the temp>30
------------------------------------------------------------------------------------------------------------
## Component:
1) PIR (motion sensor) (you can find it here)[https://ram-e-shop.com/product/kit-pir-module/]
2) LM35dz (Temperature sensor) (you can find it here)[https://ram-e-shop.com/product/lm35dz/]
3) LED (you can find it here)[https://ram-e-shop.com/product/led-yy/]
4) 8 Channel Logic Level Converter Bi-Directional (you can find it here)[https://ram-e-shop.com/product/txs0108e-8-channel-logic-level-converter-bi-directional-3]
-3v-5v/
5) Carbon Resistor 360.0 ohm 1/4W – 5x Resistors (you can find it here)[https://ram-e-shop.com/product/fixed-resistances-50/]
6) ULN2003 (you can find it here)[https://ram-e-shop.com/product/uln2003/]
7) Bread Board (you can find it here) [https://ram-e-shop.com/product/bb601-green/]
8) Mini DC Gearbox Motors Pair (you can find it here) [https://ram-e-shop.com/product/ro-wheel-motor-dg01d/]
9) PHcr- 20Cm Female to Male 40 Jumper Set Connecting Wire (you can find it here) [https://ram-e-shop.com/product/ph60-mf-20cm/]
10) Arduino
11) Altera
12) 8650 Battery Holder 3 Cell (you can find it here) [https://ram-e-shop.com/product/battery-holder-18650x3/]
------------------------------------------------------------------------------------------------------------
## How the circuit works:
  The circuit could be divided into to parts the first part the arduino and the second the altera,
  We simply connect the arduino to the altera via (8 Channel Logic Level Converter Bi-Directional)
  As the arduino works in 5V and the altera works on 3.3VArduino:
  The two sensors are connected to arduino and the battery that is supplying the circuit
  And when the sensors are active it sends signal to the arduino and the arduino sends it to
  The altera but not directly as the arduino works on 5V and altera works on 3.3V
  8 channel logic level converter:
  The TXS0108E 8-Ch Logic Level Converter Module is a bi-directional device for converting signals
  between 3.3V(altera) and 5V(arduino).
  ULN2003:
  Motor driver ic, itis used to drive high current loads to the motor as the motor cannot
  run on Arduino I/O hence we use this IC to source enough current and voltage for the
  load
  Altera (Controller):
  It acts like the controller of the whole circuit as when the sensors sends signals to arduino and
  these signals come to altera via (converter) it sends a signal to the the led when there is motion
  and signal to the ULN2003(after converting the signal it goes to motor) when the temperature is
  high.
