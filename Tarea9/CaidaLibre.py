import numpy as np
import matplotlib.pyplot as plt

# Leemos los datos que generamos con C++ y los graficamos en Python.

datos = np.loadtxt("CaidaLibre.dat")
tiempo = datos[:,0]
Posicion = datos[:,1]

fig, ax = plt.subplots(figsize=(7,5))
ax.plot(tiempo, Posicion)
ax.set_title('Caida Libre con Vi = 20 m/S y Hi = 8.5 m')
ax.set_xlabel('Tiempo (s)')
ax.set_ylabel('Altura (m)')
plt.savefig("CaidaLibre.pdf")

