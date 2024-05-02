/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cal[10];
    int suma=0;

    for(int i=0; i<10; i++){
        cout << "Ingrese calificacion para estudiantes: ";
        cin >> cal[10];
        suma+=cal[10];
    }

    double prom=suma/10;
    cout << "El promedio de las calificaciones es: " << prom << endl;

    return 0;
}

