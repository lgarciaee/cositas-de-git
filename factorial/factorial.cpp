#include<iostream> 
using namespace std;

int fact();

int main()
{
    int num;
    cout<< "Ingrese un numero entero" ; 
    cin>>num;
    
    int fact=1;
    
    if(num==0) 
    {
        fact=1;
    }
    else 
    {
        for(int i =1;i<= num;i++)
        {
            fact = fact*i;
        }
        
    }
    
    cout << "El factorial del numero " << num << "es" << fact << endl;
    return fact;
    
    
}
