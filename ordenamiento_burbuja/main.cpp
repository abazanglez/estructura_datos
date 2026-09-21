#include <iostream>
#include <utility>

void burbuja(int numeros[], int n, int &comparaciones, int &intercambios) {
    comparaciones = 0;
    intercambios = 0;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            comparaciones++;
            if (numeros[j] > numeros[j + 1]) {
                std::swap(numeros[j], numeros[j + 1]);
                intercambios++;
            }
        }

        // Mostrar el estado del arreglo tras cada pasada
        std::cout << "Pasada " << (i + 1) << ": ";
        for (int k = 0; k < n; ++k) {
            std::cout << numeros[k] << " ";
        }
        std::cout << "\n";
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
    int comparaciones = 0;
    int intercambios = 0;

    std::cout << "Arreglo original: ";
    imprimirArreglo(numeros, n);
    std::cout << "\n";

    burbuja(numeros, n, comparaciones, intercambios);

    std::cout << "\nArreglo ordenado: ";
    imprimirArreglo(numeros, n);

    std::cout << "\nElementos: " << n << "\n";
    std::cout << "Comparaciones: " << comparaciones << "\n";
    std::cout << "Intercambios: " << intercambios << "\n";

    return 0;
}
