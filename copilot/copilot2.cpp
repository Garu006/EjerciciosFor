#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i >= 1; i--) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}