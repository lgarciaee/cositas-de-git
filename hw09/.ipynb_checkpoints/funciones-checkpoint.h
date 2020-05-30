// header file 

# include <cmath>
# include <cstdio>
# include <iostream>
# include <fstream>

using namespace std;

double tiempo(int v0)
{
    double gravedad = 9.8;
    double tiempo = (2*v0)/gravedad;
    return tiempo   
}

double altura(double y, double v0, double t)
{
    double gravedad = 9.8;
    double altura = y + (v0*t) - (0.5)*gravedad*(pow(t,2));
    return altura
}

double velocidad(double v0, double t)
{
    double gravedad = 9.8;
    double velocidad = v0 -(gravedad*t);
    return velocidad
}x