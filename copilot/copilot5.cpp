#include <iostream>
using namespace std;

int main() {
    double notas[8];
    int cantidadAprobados = 0;
    int cantidadReprobados = 0;
    double suma = 0;

    cout << "Ingrese las notas de los 8 estudiantes: ";

    for (int i = 0; i < 8; i++) {
        cin >> notas[i];
        suma += notas[i];

        if (notas[i] >= 70) {
            cantidadAprobados++;
        } else {
            cantidadReprobados++;
        }
    }

    double promedio = suma / 8;

    cout << "Cantidad de alumnos aprobados: " << cantidadAprobados << std::endl;
    cout << "Cantidad de alumnos reprobados: " << cantidadReprobados << std::endl;
    cout << "Promedio general del grupo: " << promedio << std::endl;

    return 0;
}