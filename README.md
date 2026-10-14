# Notebook-and-Folder-AI-Visual-Classification

This project uses an AI Image Classification Model exported from Google Teachable Machine, capturing the video from a webcam and classifying the image (either background, notebook, or folder) by a number based on its label.
The classified images' number for the label is then displayed on a 1-digit 7-segment display using Arudino.

The current labels are:

- '0' = Background
- '1' = Notebook
- '2' = Folder

## Requirements
Package Installations:
py -3.12 -m pip install --upgrade pip
py -3.12 -m pip install tensorflow==2.21.0 tf_keras==2.21.0 
py -3.12 -m pip install opencv-python==5.0.0.93
py -3.12 -m pip install pyserial


## How to Set Up
1. Install required packages
2. Have keras_model.h5 and labels.txt 
3. Set up 7-segment display module from Arduino kit based on provided references 
4. Run finalized_arduino_code.ino on Arduino IDE and get the com port from the board (e.g. COM3)
5. Run GoogleTeachableCode-KerasOpenCV-Serial.py (make sure the serial port is the same as the port from Arduino)


## Files in this Repository 
- 'keras_model.h5' — trained model file
- 'labels.txt' — label list used by the model
- 'GoogleTeachableCode-KerasOpenCV-Serial.py' — Webcam connected with Arduino Code
- 'test_code.ino" — Code to test 7-segment display functionality
- 'finalized_arduino_code.ino' — code that uses the message from the model to display the respected number


## References
1 Digit 7-Segment display was built using these references as inspiration:
- https://projecthub.arduino.cc/stannano/one-digit-7-segment-led-display-819bcd
- <img width="1200" height="800" alt="image" src="https://github.com/user-attachments/assets/2c1fbd76-13a4-4819-877d-93665023b214" />


## Potential Issues
- The 7-Segment display might display something different than the provided numbers, please make sure that the wire placement is correct and to their respected pins
  The provided references and test_code.ino are there to help verify
- Serial Port needs to be the same as port on Arduino
- Make sure to code on Python 3.12
- The model may not fully recognize the differences between the similarities of a notebook or folder, the background may not be fully recognized due to the specfic environment when training model.
  You can use your own image trained model for this project if needed.
