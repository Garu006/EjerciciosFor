/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> num;

    int vector1[num];
    int vector2[num];
    int vector3[num];

    cout << "Ingrese los valores de los vectores: " << endl;
    for(int i=0; i<num; i++){
        cin >> vector1[i];
    }

    for(int i=0; i<num; i++){
        cin >> vector2[i];
    }

    for(int i=0; i<num; i++){
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "El resultado de la suma de vectores es: " << endl;
    for(int i=0; i<num; i++){
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}