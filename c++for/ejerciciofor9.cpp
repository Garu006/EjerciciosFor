/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int fila1, fila2, columna1, columna2;
    cout << "Ingrese el numero de filas y columnas de la primera matriz: ";
    cin >> fila1 >> columna1;
    cout << "Ingrese el numero de filas y columnas de la segunda matriz: ";
    cin >> fila2, columna2;

    if(columna1 != fila2){
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicacion" << endl;
        return 1;
    }

    int matriz1[fila1][columna1];
    int matriz2[fila2][columna2];
    int matrizResult[fila1][columna2];

    cout << "Ingrese los valores de la primera matriz: ";
    for(int i=0; i<fila1; i++){
        for(int j=0; j<columna1; j++){
            cin >> matriz1[i][j];
        }
    }

    for(int i=0; i<fila1; i++){
        for(int j=0; j<columna2; j++){
            matrizResult[i][j]=0;
            for(int g=0; g<fila2; g++){
                matrizResult[i][j]+=matriz1[i][g]*matriz2[g][j];
            }
        }
    }

    cout << "La matriz resultado de la multiplicacion es: " << endl;
    for(int i=0; i<fila1; i++){
        for(int j=0; j<columna2; j++){
            cout << matrizResult[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}
