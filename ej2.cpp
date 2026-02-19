#include <iostream>
#include <array>
#include <vector>
#include <chrono>


using namespace std;
int* crearArray(int n) {
    int *arr1 = new int[n];

    return arr1;
}

int* llennarArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 1000;
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

void sortArray(int arr[], int n ) {
    for (int i=1; i<n; i++) {
        for (int j =0; j<n-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " | ";
    }
    cout << endl;
}


    int main() {

    int n;
    std::cout << "ingresa la magnitud del arreglo: ";
    std::cin >> n;
    auto inicio = chrono::high_resolution_clock::now();
int* arr = crearArray(n);
llennarArray(arr, n);
imprimirArray(arr, n);
    buscarMayor(arr,n);
    buscarMenor(arr,n);
    sortArray(arr,n);
    delete[] arr;

    auto fin = chrono::high_resolution_clock::now();
    chrono::duration<double> tiempo = fin - inicio;
    cout << "Tiempo de ejecucion: " << tiempo.count() << " segundos" << endl;
    return 0;
}




