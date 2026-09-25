#include <iostream>
#include <utility>
using namespace std;

void mostrarArreglo(const int numeros[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

void selectionSort(int numeros[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (numeros[j] < numeros[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            swap(numeros[i], numeros[minIdx]);
        }

        cout << "Pasada " << (i + 1) << ":" << endl;
        mostrarArreglo(numeros, n);
    }
}

int main()
{
    int numeros[] = {64, 45, 32, 20, 12, 8, 3};
    int n = 7;

    cout << "Arreglo original:" << endl;
    mostrarArreglo(numeros, n);
    cout << endl;

    selectionSort(numeros, n);

    return 0;
}
