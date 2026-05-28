#include <iostream>
using namespace std;

void llenarArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el entero #" << i + 1 << ": ";
        cin >> arr[i];
    }
}


void segundoArreglo(int arr[], bool arrBool[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            arrBool[i] = true;
        } else {
            arrBool[i] = false;
        }
    }
}

void mostrarArreglo(bool arrBool[], int n) {
    for (int i = 0; i < n; i++) {
        if (arrBool[i]) {
            cout << "Positivo" << endl;
        } else {
            cout << "Negativo o cero" << endl;
        }
    }
}

int main() {
    int n;
    cout << "Cantidad de enteros: ";
    cin >> n;

    int arr[n];
    bool arrBool[n];

    llenarArreglo(arr, n);
    segundoArreglo(arr, arrBool, n);
    mostrarArreglo(arrBool, n);

    return 0;
}
