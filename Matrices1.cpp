// Matrices1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
int main()
{
    int matriz[3][3], matriz2[3][3], i, j, d;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Ingresa un numero de la primer matriz segun la fila y columna indicada( fila[%d] columna[%d] ):", i, j);
            scanf_s("%d", &matriz[i][j], 1);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        } printf("\n");
    }  while ((d = getc(stdin)) != '\n' && d != EOF);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Ingresa un numero de la segunda matriz segun la fila y columna indicada( fila[%d] columna[%d] ):", i, j);
            scanf_s("%d", &matriz2[i][j], 1);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matriz2[i][j]);
        } printf("\n");
    }///  while ((d = getc(stdin)) != '\n' && d != EOF);
    printf("Para multiplicar las matrices pulse la tecla enter");
    int matrizresultado[3][3];
    for (i = 0; i < 3; i++);
    {
        for (int z = 0; z < 3; z++)
        {
            matrizresultado[i][z] = 0;
            for (int r = 0; r < 3; r++)
            {
                matrizresultado[i][z] += matriz[i][r] * matriz2[r][z];
            }
        }
    }
    printf("\n");
    printf("El resultado es:");
    for (i = 0; i < 3; i++)
    {
        for (int z = 0; z < 3; z++)
        {
            printf("\n\n\n%d", matrizresultado[i][z]);
        }
    }while ((d = getc(stdin)) != '\n' && d != EOF);
} return = 0;




// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
