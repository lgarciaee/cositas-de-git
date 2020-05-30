import numpy as np
import csv
import matplotlib.pylab as plt

x = []
y = []


with open('datos.txt','r') as csvfile:
    plots = csv.reader(csvfile, delimiter=',')
    for row in plots:
        x.append(int(row[0]))
        y.append(int(row[1]))


plt.plot(x,y, label="altura")


plt.title("Tiempo vs Altura")
plt.xlabel("tiempo")
plt.ylabel("altura")
plt.legend()
plt.show()
plt.savefig("grafico.pdf")