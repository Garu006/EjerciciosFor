/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int cal[8], suma=0, apropados, reprobados;
    double prom;
    for(int i=0; i<8; i++){
        cout << "Ingrese las calificaciones para estudiantes: ";
        cin >> cal[8];
        suma += cal[8];

     if(cal[8]>=70){
        apropados++;
     }else{
        reprobados++;
     }
    }

    prom = (double)suma/8;
    cout << "El promedio general del grupo es: " << prom << endl; 
    cout << "La cantidad de estudiantes aprobados es: " << apropados << endl;
    cout << "La cantidad de estudiantes reprobados es: " << reprobados << endl;

    return 0;
}


