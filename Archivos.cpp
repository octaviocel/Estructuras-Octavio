// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* aarchivo;
    char linea[10];

    aarchivo = fopen("ids.txt", "r");
    if (aarchivo == NULL)//Si el archivo no contiene nada va a mandar un error
    {
        printf("Error al abrir el archivo");
        return(1);
    }
    //printf("Estas son las direcciones de correo de los alumnos de la clase:\n");


    while (fgets(linea, 10, aarchivo) != NULL);//Lee las lineas hasta que haya un salto
    {
        fscanf(aarchivo, "%s", linea);//Escanea la linea dentro del archivo
        printf("0%s@ulsaoaxaca.edu.mx\n", linea);//Imprime la linea con un 0 y la direccion para obtener el correo
    }
    fclose(aarchivo);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
