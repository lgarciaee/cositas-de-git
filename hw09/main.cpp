
# include <iostream> 
# include "funciones.h"
# include <math.h>

using namespace std;

// Metodo de RungeKutta4

double* RungeKutta4(double y0, double v0, double t, double dt)
{
    double* rta = new double[2];
    double Y = altura(y0,v0,t);
    double Y_new;
    double T_new;
    
    //calculo de coficientes 
    double K1 = velocidad(Y,t)*dt;
    double K2 = velocidad((Y+(K1/2)), (t+(dt/2)))*dt;
    double K3 = velocidad((Y+(K2/2)), (t+(dt/2)))*dt;
    double K4 = velocidad(Y + K3, t + dt)*dt;
    
    //Actualizando Y_new y T_new 
    Y_new = Y + ((1/6)*(K1 + (2*K2) + (2*K3) + K4));
    T_new = t + dt;
    rta[0]= T_new;
    rta[1]= Y_new;
    
    return rta;
}

int main()
{
    // condciones para RungeKutta
    double T = tiempo(v0);
    double t0 = 0;
    double dt = 0.1;
    
    // condiciones dadas 
    double y0 = 8.5;
    double v0 = 20; 
    
    int c = 1
    double* tiempo = new double[c];
    double* altura = new double[c];
    return c;
    
    int i = 0;
    double T = 0;
    
    while(i<c and t<c)
    {
        double*rta = RungeKutta4(y0,v0, T,dt);
        tiempo[i]= rta[0];
        altura[i]= rta[1];
        
        T+=0.1;
        i++;
    }
    
    
    return 0;
}

