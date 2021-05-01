/*                      PARTE2
Realizar un programa que calcule si el numero entero ingresado es par o impar*/

#include <iostream>
using namespace std;

int n;
int main(){
    cout << "Ingrese un numero entero: "; 
    cin >> n;
    if(n == 0){
        cout << "Ingrese un número diferente de 0";
        cout << endl;
        return 0;}
     else if (n % 2 == 0){
        cout << "\nEL NUMERO INGRESADO ES PAR";
        cout << endl;}
    else{        
            cout << "\nEL NUMERO INGRESADO ES IMPAR";
            cout << endl;}
       return 0;
}