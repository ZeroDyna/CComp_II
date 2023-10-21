#include <iostream>
using namespace std;

void multiplicacion(int (*A)[3][3]) {
    int result[3][3] = {0}; // Matriz para meter el resultado, posteriormente se meteera en la tercera parte del array osea la 3era matriz

    int *p = *(*A);
    int *q = *(*A);
    int *r = *result;

    for (int *i = p; i < p + 9; i += 3, q = *(*A), r += 3) {
        for (int *j = q; j < q + 3; j++) {
            for (int k = 0; k < 3; k++) {
                *(r + (j - q)) += *(i + k) * *(j + k);
            }
        }
    }

    p = *(*A+2);
    r = *result;
    for (int *i = p; i < p + 9; i += 3, r += 3) {
        for (int *j = i; j < i + 3; j++) {
            *j = *(r + (j - i));
        }
    }
}

int main() {
    int A[3][3][3] = {};
    int linea = 0;

    cout << "Ingresa los valores para las primeras dos matrices:" << endl;

    for (int i = 0; i < 2; i++) {
        for (int* p = *(*A+i); p < *(*A+i) + 9; p++) {
            cin >> *p;
        }
    }
    
    cout << "Las matrices iniciales:" << endl;

    for (int i = 0; i < 2; i++) {
        for (int* q = *(*A+i); q < *(*A+i) + 9; q++) {
            cout << *q << " ";
            linea++;
            if (linea == 3) {
                cout << "\n";
                linea = 0;
            }
        }
        cout << "\n";
    }
    
    multiplicacion(A);

    cout << "La matriz final:" << endl;

    for (int* q = *(*A+2); q < *(*A+2) + 9; q++) {
        cout << *q << " ";
        linea++;
        if (linea == 3) {
            cout << "\n";
            linea = 0;
        }
    }

    return 0;
}
