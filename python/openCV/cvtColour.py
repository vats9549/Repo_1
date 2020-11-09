import numpy as np
from cv2 import cv2
from matplotlib import pyplot as plt

img=cv2.imread("/home/vatsal/Downloads/numImage1.jpg")
Gimage=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
BlurImage=cv2.GaussianBlur(img,(21,21),0)
CannyImage=cv2.Canny(img,100,100)
#cv2.imshow('image',img)
#cv2.imshow('Gray image',Gimage)
#cv2.imshow('BlurImage',BlurImage)
cv2.imshow('CannyImage',CannyImage)
cv2.waitKey(6000)
cv2.destroyAllWindows()