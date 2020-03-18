am// Signozodiacal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>

int main()
{
    int dia, mes;
    char d;
    printf("Dia\n");
    scanf_s("%d", &dia);
    printf("Mes\n");
    scanf_s("%d", &mes);
    while ((d = getc(stdin)) != '\n' && d != EOF);                      
    switch (mes)
        
    {
    case 1: 
        printf("Invierno\n");
        if (dia < 20)
            printf("Capricornio");
        else
            printf("Acuario");
        break;
    case 2:
        printf("Invierno\n");
        if (dia < 18)
            printf("Acuario");
        else
            printf("Piscis");
        break;
    case 3:
        if (dia < 21){
            printf("Invierno\n");
            printf("Piscis\n");
        }
        else
            printf("Primavera\nAries");
            break;
    case 4:
        printf("Primavera\n");
        if (dia < 20)
            printf("Aries");
        else
            printf("Tauro");
        break;
    case 5:
        printf("Primavera\n");
        if (dia < 21)
            printf("Tauro");
        else
            printf("Geminis");
        break;
    case 6:
        if (dia < 21) {
            printf("Primavera\n");
            printf("Geminis");
        }
        else
            printf("Verano\nCancer");
        break;
    case 7:
        printf("Verano\n");
        if (dia < 23)
            printf("Cancer");
        else
            printf("Leo");
        break;
    case 8:
        printf("Verano\n");
        if (dia < 24)
            printf("Leo");
        else
            printf("Virgo");
        break;
    case 9:
        if (dia < 21) 
            printf("Verano\n");
        else
            printf("Otono\n");
        if (dia < 23)
            printf("Virgo");
        else
           printf("Libra");
        break;
    case 10:
        printf("Otono\n");
        if (dia < 23)
            printf("Libra");
        else
            printf("Escorpion");
        break;
    case 11:
        printf("Otono\n");
        if (dia < 23)
            printf("Escorpion");
        else
            printf("Sagitario");
        break;
    case 12:
        if (dia < 21)
            printf("Otono\n");
        else
            printf("Invierno\n");
        if (dia < 22)
            printf("Sagitario");
        else
            printf("Capricornio");
       
            break;
    }
    /*while ((mes < 1) || (mes > 12));
    if(mes == 3 || 4 || 5 || 6)
    {
        printf("Primavera");
    }*/
    
        
}  

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
