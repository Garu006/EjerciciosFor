#include <iostream>
using namespace std;

void transponerMatriz(int A[][10], int n, int m) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
}

int main() {
    int n, m;

    cout << "Ingrese las dimensiones de la matriz (filas columnas): ";
    cin >> n >> m;

    int A[n][m];

    cout << "Ingrese los elementos de la matriz: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    transponerMatriz(A, n, m);

    cout << "La matriz transpuesta es: " << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}