#include <iostream>
#include <array>
#include <vector>


using namespace std;
int* crearArray(int n) {
    int *arr1 = new int[n];

    return arr1;
}

int* llennarArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 10000;
    }
    return arr;
}

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " | ";
    }
    std::cout << std::endl;
}

void buscarMayor(int arr[], int n) {
    int mayorActual = arr[0];
    for (int i = 0; i < n; ++i) {
        if (mayorActual < arr[i]) {
            mayorActual = arr[i];
        }
        else {
            mayorActual = mayorActual;
        }
    }
std::cout<< "Mayor:  " <<mayorActual <<endl;
}

void buscarMenor(int arr[], int n) {
    int menorActual = arr[0];
    for (int i = 0; i < n; ++i) {
        if (menorActual > arr[i]) {
            menorActual = arr[i];
        }
        else {
            menorActual = menorActual;
        }
    }
    std::cout<< "Menor:  " <<menorActual <<endl;
}




    int main() {
    int n;
    std::cout << "ingresa la magnitud del arreglo: ";
    std::cin >> n;

int* arr = crearArray(n);
llennarArray(arr, n);
imprimirArray(arr, n);
    buscarMayor(arr,n);
    buscarMenor(arr,n);
    delete[] arr;
    return 0;
}




