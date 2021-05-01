/*                            PARTE 1
Realizar un programa en c++ obedeciendo a la siguiente argumentación:
El costo de la carrera del IUTA puede ser cancelado de la siguiente manera : 
una inicla del 20% del costo completo y el resto debe ser cancelado en cuotas mensuales
 durante 3 años, imprima un conjunto de instrucciones que permita calcular e imprimir la
inicial y el monto de las cuotas mensuales dado el costo de la carrera*/

#include <iostream>
using namespace std;
int pagoinicial, costocarrera;
float cuotamensual,duracion=36;
int main(){
    cout<<"Digite el costo de la carrera:  "; cin>>costocarrera;
    pagoinicial = (costocarrera*20)/100;
    cuotamensual = (costocarrera-pagoinicial)/duracion;

    cout<<"El pago inicial de la carrera es: " << pagoinicial<<"$";
    cout<< endl;
    cout<<"La cuota mensual de la carrera es: " << cuotamensual<< "$";
    cout<<endl; 

    return 0;
}