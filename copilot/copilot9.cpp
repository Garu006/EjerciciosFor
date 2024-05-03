#include <iostream>
using namespace std;

void multiplicarMatrices(int A[][10], int B[][10], int C[][10], int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n, m, p, q;

    cout << "Ingrese las dimensiones de la primera matriz (filas columnas): ";
    cin >> n >> m;

    int A[n][m];

    cout << "Ingrese los elementos de la primera matriz: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Ingrese las dimensiones de la segunda matriz (filas columnas): ";
    cin >> p >> q;

    if (m!= p) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << std::endl;
        return 0;
    }

    int B[p][q];

    cout << "Ingrese los elementos de la segunda matriz: ";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    int C[n][q];

    multiplicarMatrices(A, B, C, n, m, q);

    cout << "La matriz resultante es: " << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << std::endl;
    }

    return 0;
}