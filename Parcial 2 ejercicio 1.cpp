//Maximiliano Xavier Rivera Lara 00067826 
//Oscar Josué Pineda Martinez 00374825
//Carlos Antonio Perez Acosta 00098925


#include <iostream>
using namespace std;
void llenarArr(int [], int, int, int *);
void mostrarArr(int[], int);

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    int arr[100]; 
    int size = 0; //esto es para q sepa cuantas posiciones del arreglo se llenaron, ya q el arreglo tiene un tamaño fijo de 100 pero no necesariamente se van a llenar todas las posiciones

    llenarArr(arr, num1, num2, &size);
    mostrarArr(arr, size);

    return 0;
}

void llenarArr(int arr[], int num1, int num2, int *size) {
    int iterador = 0; 
    while (num1 > 0 || num2 > 0) {
        int digito1 = num1 % 10; //esto hace q se quede con el ultimo digito del numero
        int digito2 = num2 % 10; //lo mismo pero con el segundo numero
        arr[iterador] = digito1 + digito2; 
        num1 /= 10; //esto sirve para eliminar el ultimo digito del numero, ya q al dividirlo entre 10 se queda con el numero sin el ultimo digito, por ejemplo si num1 es 123, al hacer num1 /= 10, num1 se convierte en 12, y en la siguiente iteracion se queda con el siguiente digito que es 2
        num2 /= 10; 
        iterador++; 
    *size = iterador; 
}}

void mostrarArr(int arr[], int size) {
    cout << "Arreglo: ["; //esto sirve para q se vea el arreglo como una lista. 
    for (int i = 0; i < size; ++i) { //use for porq es mas facil de manejar cuando se sabe el tamaño del arreglo, en este caso size, que es el numero de posiciones que se llenaron en el arreglo.
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl; //esto solo es para cerrar el arreglo y se vea bien bonito 
}
//Codigo comentado por max, no por chatgpt jaja