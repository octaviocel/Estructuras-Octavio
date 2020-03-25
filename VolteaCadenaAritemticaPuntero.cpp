// VolteaCadenadeCaracteres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#define lar_cadena 1000

char *voltea_cadena(char *cadena) {
    int longitud_cadena = strlen(cadena) - 1;
    char temporal;
    for (int cad_izquierda = 0/*, cad_derecha = longitud_cadena - 1*/; cad_izquierda <= (longitud_cadena / 2);cad_izquierda++/*, cad_derecha--*/)
    {
        temporal = *(cadena + cad_izquierda);
        *(cadena + cad_izquierda) = *(cadena + (longitud_cadena - cad_izquierda));
        *( cadena + (longitud_cadena - cad_izquierda))= temporal;
    }
    return cadena;
}
int main()
{
    char cadena[lar_cadena];
    printf("Escriba la palabra\n");
    fgets(cadena, lar_cadena, stdin);

    printf("La cadena invertida es: %s", voltea_cadena(cadena));
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
