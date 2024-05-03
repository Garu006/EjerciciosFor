#include <iostream>
using namespace std;

int main() {
    double notas[10];
    double suma = 0;

    cout << "Ingrese las notas de los 10 estudiantes: ";

    for (int i = 0; i < 10; i++) {
        cin >> notas[i];
        suma += notas[i];
    }

    double promedio = suma / 10;

    cout << "El promedio general de la sección es: " << promedio << std::endl;

    return 0;
}