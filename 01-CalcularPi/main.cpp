#include <iostream>
#include <iomanip>
#include <cmath>
//Iterar hasya que los  primerps 6 digitos sean estables
//Hay que ir restando los valores, diferencia por valor absoluto
using namespace std;

    double calcularPi(){
        double signo = 1.0; // signo, el cual varia
        double pi = 0.0; // inicializo pi en 0.0

        double decimales = 0.000001;

        double i = 2.0; //suma a denominador
        double denominador = 1.0; //denominador
        double division = signo / denominador; // termino de divison
            while(abs(4 * division) >= decimales){ //devuelve el valor absoluto
                pi = pi + 4 * division;
                signo = signo * -1.0;
                denominador = denominador + i; // siempre impar
                division = signo / denominador;
            }
    return pi;
    }

int main(){
    double pi = calcularPi();
    cout<< setprecision(6) << fixed << "El valor de Pi es: " << pi << endl;
    return 0;
}
