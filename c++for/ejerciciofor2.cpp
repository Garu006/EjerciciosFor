/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Numeros impares en orden descendente entre 1 y 100: " << endl;
    for(int i=99; i>=1; i -=2){
        cout << i << endl;
    }
    return 0;
}

