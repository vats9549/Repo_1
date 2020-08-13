import numpy as np
from cv2 import cv2
from matplotlib import pyplot as plt

img=cv2.imread("/home/vatsal/Downloads/numImage1.jpg")
cv2.imshow('image',img)
cv2.waitKey(6000)
cv2.destroyAllWindows()