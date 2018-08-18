__author__ = 'www.iotalliance.in'
'''
This is a file for controlling keyboard events.
'''
import pyautogui
import serial
 

myserial = serial.Serial('com3', 115200)
k = pyautogui
TRUE = 1;
try:
    while (TRUE):
       if (myserial.inWaiting()):
          print("entered")
          mydata = myserial.readline().decode('utf-8');
          x = int(mydata)
          if x==1:
               k.press('left')
               print('left')

          if x==2:
               k.press('right')
               print('right')
              
except KeyboardInterrupt:
    print("stop")
