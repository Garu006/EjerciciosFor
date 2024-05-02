/*. Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, suma = 0;

    cout << "Ingrese un numero natual: ";
    cin >> num;

    for(int i=1; i<=num; ++i){
        suma += 1;
    }

    cout << "La suma de los numeros naturales desde 1 hasta  " << num << " es: " << suma << endl;   
    
    return 0;
}
