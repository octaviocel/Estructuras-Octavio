// Tirodedosdados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*const int lados = 6;
int main()
{
    int cara, cara1, resultado,tf =3600, ti=0, arr[3600];
    char d;
    while ((d = getc(stdin)) != '\n' && d != EOF);
    for(int i = tf; i>= ti; i--)
    {
        cara = rand() % lados + 1;
        cara1 = rand() % lados + 1;
        resultado = cara + cara1;
       // printf("Resultado es: %d \n ", resultado)
        resultado, &arr[3600];
    }
    printf("%d", arr);
} */

int main() {

    int suma = 0;
    int suma1[13] = { 0 };

    srand((unsigned)time(0));

    for (int j = 1; j <= 36000; j++) {
        suma = 0;
        for (int i = 0; i < 2; i++) {
            suma += ((rand() % 6) + 1);
        }
        suma1[suma]++;
    }

    for (int i = 2; i <= 12; i++) {
        printf("La suma %d salio: %d veces\n", i, suma1[i]);
    }

    return 0;
}
/*int main() {
    int n = 3600, a[20][20], x, y;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        x = rand() % 6 + 1;
        y = rand() % 6 + 1;
        a[x][y]++;
    }
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
