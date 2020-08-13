from cv2 import cv2
import numpy as np

vid=cv2.VideoCapture("/home/vatsal/Desktop/anime.mp4")

while True:
    success, img=vid.read()
    cv2.imshow("Video",img)
    if cv2.waitKey(1)& 0xFF ==ord ('q'):
        break