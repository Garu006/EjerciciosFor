#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n];
    int vector2[n];
    int vector3[n];

    cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "El vector resultado es: ";
    for (int i = 0; i < n; i++) {
        cout << vector3[i] << " ";
    }

    return 0;
}