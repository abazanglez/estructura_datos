#include <iostream>
#include <utility>

void burbuja(int numeros[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (numeros[j] > numeros[j + 1]) {
                std::swap(numeros[j], numeros[j + 1]);
            }
        }
    }
}

void imprimirArreglo(const int numeros[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int numeros[] = {5, 1, 4, 2, 8};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    std::cout << "Arreglo original: ";
    imprimirArreglo(numeros, n);

    burbuja(numeros, n);

    std::cout << "Arreglo ordenado: ";
    imprimirArreglo(numeros, n);

    return 0;
}
