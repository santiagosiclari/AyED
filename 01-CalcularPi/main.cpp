#include <iostream>
using namespace std;

    double calcularPi(){
        int sign = 1; // signo, el cual varia
        int deno = 1; //denominador
        int maxIter = 1000000; //max iteraciones, a corregir?
        double pi = 0.0; // inicializo pi en 0.0

        for (int i = 0; i < maxIter; i++){
            pi = pi + sign * ( 1.0 / deno);
            sign = sign * (-1); //cambio de signo
            deno = deno + 2; // denominador aumento en dos, siempre impar
        }
    return pi * 4;// s. leib = pi/4
    }

int main(){
    double pi = calcularPi();
    cout.precision(7);
    cout<<"El valor de Pi es: " << pi << endl;

    return 0;
}
