// Maicra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdlib.h>
#include <stdio.h>
#define SIZE 1000

int main() {

    long long int n, k;
    long long int suma1 = 0, suma2 = 0;
    long long int diamantes[SIZE];
    printf("Indica cuantas filas hay:\n");
    scanf_s("%lld", &n);

    for (long long int i = 0; i < n; i++) {
        printf("Da los valores de la fila:\n");
        scanf_s("%lld", &diamantes[i]);
    }
    printf("Resistencia del pico:\n");
    scanf_s("%lld", &k);

    for (long long int i = 0; i < n; i++) {
        if ((n - i) < k) continue;
        for (long long int j = 0; j < k; j++) {
            suma1 += diamantes[i + j];
        }
        if (suma1 >= suma2) {
            suma2 = suma1;
            suma1 = 0;
        }
        else {
            suma1 = 0;
        }
    }

    printf("%lld", suma2);
   

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
