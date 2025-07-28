EXPERIMENT : Door Buzzer using Ultrasonic Sensor

Description

This experiment demonstrates a simple door buzzer system that activates when an object (like a door opening or a person passing through a doorway) is detected within a certain range by an ultrasonic sensor. The ultrasonic sensor measures the distance to an object, and if that distance falls below a pre-set threshold, an audible buzzer will sound, indicating the presence of the object. This project is a basic application of sensor-based automation and can be expanded for various proximity detection tasks.

Components

the following components are used:

1.  Arduino Uno: This is the microcontroller board that will process the signals from the ultrasonic sensor and control the buzzer.
2.  HC-SR04 Ultrasonic Sensor: This sensor is used to measure distances by emitting ultrasonic waves and calculating the time it takes for the waves to return after bouncing off an object. It typically has four pins: VCC, GND, Trig (Trigger), and Echo.
3.  Piezo Buzzer: An electronic component that produces sound when an electrical current is applied to it. It typically has two pins: positive and negative.
4.  Breadboard (Optional, but good for prototyping): While not explicitly shown in use for all connections in the image, a breadboard is generally used to make temporary connections and organize circuits. In this specific image, the connections seem to be directly to the Arduino and the sensor/buzzer.
5.  Jumper Wires: Used to connect the various components to the Arduino board.

### Procedure of Connection

Follow these steps to connect the components as shown in the image:

1.  **Arduino Uno Power:**
    * Connect the **USB cable** from your computer to the Arduino Uno's USB port. This will power the Arduino and allow for programming.

2.  **HC-SR04 Ultrasonic Sensor Connection:**
    * **VCC:** Connect the VCC pin of the HC-SR04 sensor to the **5V pin** on the Arduino Uno.
    * **GND:** Connect the GND pin of the HC-SR04 sensor to one of the **GND pins** on the Arduino Uno.
    * **Trig (Trigger) Pin:** Connect the Trig pin of the HC-SR04 sensor to **Digital Pin 9** on the Arduino Uno.
    * **Echo Pin:** Connect the Echo pin of the HC-SR04 sensor to **Digital Pin 10** on the Arduino Uno.

3.  **Piezo Buzzer Connection:**
    * **Positive (+) Pin:** Connect the positive pin of the buzzer (often marked with a '+' or a longer leg) to **Digital Pin 8** on the Arduino Uno.
    * **Negative (-) Pin:** Connect the negative pin of the buzzer to a **GND pin** on the Arduino Uno.
