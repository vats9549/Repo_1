from cv2 import cv2
import numpy as np

vid=cv2.VideoCapture(0)
vid.set(3,640)
vid.set(4,480)
vid.set(10,0)
while True:
    success, img=vid.read()
    cv2.imshow("Video",img)
    if cv2.waitKey(1)& 0xFF ==ord ('q'):
        break