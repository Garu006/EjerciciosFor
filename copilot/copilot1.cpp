#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Ingrese un numero natural: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << sum << std::endl;

    return 0;
}