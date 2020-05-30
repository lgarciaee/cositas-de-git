#!/bin/bash

# 1) Compile el archivo main.cpp incluyendo el encabezado funciones.h 
g++ main.cpp 

# 2) Ejecute la fucnion a.out y redireccione la salida a datos.txt
./a.out

# 3) Ejecute la grafica 
python grafica.py