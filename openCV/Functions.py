import numpy as np
from cv2 import cv2
from matplotlib import pyplot as plt
kernel=np.ones((5,5),np.uint8)

img=cv2.imread("/home/vatsal/Downloads/numImage1.jpg")
Gimage=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
BlurImage=cv2.GaussianBlur(img,(21,21),0)
CannyImage=cv2.Canny(img,150,800)
Dialationimg=cv2.dilate(Gimage,kernel,iterations=1)
imgEroded=cv2.erode(img,kernel,iterations=1)
#cv2.imshow('image',img)
#cv2.imshow('Gray image',Gimage)
#cv2.imshow('BlurImage',BlurImage)
#cv2.imshow('CannyImage',CannyImage)
cv2.imshow('Dialation image',Dialationimg)
cv2.imshow('eroded image',imgEroded)

cv2.waitKey(6000)
cv2.destroyAllWindows()