#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n];
    int vector2[n];
    int productoPunto = 0;

    cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        productoPunto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los dos vectores es: " << productoPunto << std::endl;

    return 0;
}