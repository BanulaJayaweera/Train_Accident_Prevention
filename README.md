#  Train Accident Prevention System

This project aims to prevent train accidents by detecting the presence of trains, obstacles (such as elephants), and open gates using a combination of ultrasonic and PIR sensors. Alerts are sent through a GSM module and the status is shown on an OLED screen.

#  Repository Structure

#  System Description

The system consists of two Arduino units that communicate wirelessly.

# Transmitter Unit (Tx)
- Connected to:
  - **Ultrasonic Sensor 1**: Detects approaching train
  - **Ultrasonic Sensor 2**: Detects open/malfunctioning gate
  - **PIR Sensor**: Detects elephant movement
- Sends sensor data to the Receiver via serial or wireless module

# Receiver Unit (Rx)
- Connected to:
  - **SIM900 GSM module**: Sends SMS alerts
  - **128x64 OLED Display**: Shows real-time status
- Receives data from Transmitter
- Triggers alert if condition is met:
