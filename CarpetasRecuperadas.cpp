// CarpetasRecuperadas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 1000

int main() {

    char carpetas[SIZE][SIZE];
    char d;
    int carp, sum, cont = 0, piv = 1;

    printf("Numero de carpetas:\n ");
    scanf_s("%d", &carp, 1);
    while ((d = getc(stdin)) != '\n' && d != EOF);

    for (int i = 0; i < carp; i++) {
        printf("Nombre de la carpeta %d: ", i + 1);
        gets_s(carpetas[i]);
    }


    printf("Numero que se le va a sumar: ");
    scanf_s("%d", &sum);
    while ((d = getc(stdin)) != '\n' && d != EOF);

    for (int i = 0; i < carp; i++) {
        cont = 0;
        piv = 1;
        int largo = strlen(carpetas[i]) - 1;
        for (int j = largo; j >= 0; j--) {
            if (carpetas[i][j] >= '0' && carpetas[i][j] <= '9') {
                cont += (carpetas[i][j] - '0') * piv;
            }
            piv *= 10;
        }
        cont += sum;
        for (int j = 0; j <= largo; j++) {
            if (carpetas[i][j] >= '0' && carpetas[i][j] <= '9') continue;
            printf("%c", carpetas[i][j]);
        }
        printf("%d \n", cont);
    }

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
