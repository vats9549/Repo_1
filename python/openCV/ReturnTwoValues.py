import numpy as np
import matplotlib.pyplot as plt

def SquareCube(x):
    return(x**2, x**3)

n=int(input("Enter a number: "))
sq, qu=SquareCube(n)
print(sq)
print(qu)

arr = np.array([1, 2, 3, 4, 5, 6, 7])

print(arr[1:5]) 


xpoints = np.array([1, 8])
ypoints = np.array([3, 10])

plt.plot(xpoints, ypoints)
plt.show()

