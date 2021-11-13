import numpy as np 
import matplotlib.pyplot as plt 

A=np.loadtxt("Data.txt")
x=A[:,0]
y=A[:,1]
plt.plot(x,y)
plt.show()