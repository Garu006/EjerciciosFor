/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int lon;
    cout << "Ingrese la longitud del primer vector: " << endl;
    cin >> lon;

    int vector1[lon];
    int vector2[lon];
    int productPunto=0;

    cout << "Ingrese los valores del primer vector: " << endl;
    for(int i=0; i<lon; i++){
        cin >> vector1[i];
    }

    cout << "Ingrese los valores del segundo vector: " << endl;
    for(int i=0; i<lon; i++){
        cin >> vector2[i];
        productPunto+= vector1[i]*vector2[i]; 
    }

    cout << "El producto punto de los dos vectores es: " << productPunto << endl;

    return 0;
}
