/*.Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int fila, columna;
    cout << "Ingrese el numero de filas y columnas de la matriz: ";
    cin >> fila >> columna;

    int matriz[fila][columna];
    cout << "Ingrese los elementos de la matriz: " << endl;
    for(int i = 0; i < fila; i++){
        for(int g=0; g<columna; g++){
            cin >> matriz[i][g];
    }
    }

    cout << "Matriz original: " << endl;
    for(int i=0; i<fila; i++){
        for(int g=0; g<columna; g++){
        cout << matriz[i][g] << " ";
    }
    cout << endl;
    }

    cout << "Matriz transpuesta: " << endl;
    for(int i=0; i<columna; i++){
        for(int g=0; g<fila; g++){
        cout << matriz[g][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
