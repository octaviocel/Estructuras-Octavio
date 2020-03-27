// MapsGoogle.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
int main()
{
    int gra, gra1;
    float min, seg, min1, seg1, longi, lati;
    char d, lon, lat;
    printf("El pograma te dara el link de Google Maps\n");
    printf("Longitud(N/S):\n");//Los scanf_ s cada uno guarda datos para grados, longitud, latitud, minutos y segundos
    scanf_s("%c", &lon);
    while ((d = getc(stdin)) != '\n' && d != EOF);
    printf("Grados:\n");
    scanf_s("%d", &gra);
    while ((d = getc(stdin)) != '\n' && d != EOF);
    printf("Minutos:\n");
    scanf_s("%f", &min);
    while ((d = getc(stdin)) != '\n' && d != EOF);
    printf("Segundos:\n");
    scanf_s("%f", &seg);
    while ((d = getc(stdin)) != '\n' && d != EOF);
    printf("Latitud(E/O):\n");
    scanf_s("%c", &lat);
    while ((d = getc(stdin)) != '\n' && d != EOF);
    printf("Grados:\n");
    scanf_s("%d", &gra1);
    while ((d = getc(stdin)) != '\n' && d != EOF);
    printf("Minutos:\n");
    scanf_s("%f", &min1);
    while ((d = getc(stdin)) != '\n' && d != EOF);
    printf("Segundos:\n");
    scanf_s("%f", &seg1);
    while ((d = getc(stdin)) != '\n' && d != EOF);

    longi = gra + (min / 60) + (seg / 3600);  // Las siguientes lineas son las operaciones que tranforman las cordenadas a lo que va al final del link
    lati = gra1 + (min1 / 60) + (seg / 3600);
    if (lon == 's'|| lon=='S' && lat == 'e' || lat == 'E')// Serie de condiciones para que mientras nos de latitudes y longitudes validad le va a imprimir el link correcto
    {
        printf("La direccion es: https://maps.google.com/maps/place/- %.5f,%.5f", longi, lati);
    }
    else if (lon == 's' || lon == 'S' && lat == 'o' || lat == 'O')
    {
        printf("La direccion es: https://maps.google.com/maps/place/- %.5f,-%.5f", longi, lati);
    }
    else if (lon == 'n' || lon == 'N' && lat == 'e' || lat == 'E')
    {
        printf("La direccion es: https://maps.google.com/maps/place/ %.5f,%.5f", longi, lati);
    }
    else if (lon == 'n' || lon == 'N' && lat == 'o' || lat == 'O')
    {
        printf("La direccion es: https://maps.google.com/maps/place/ %.5f,-%.5f", longi, lati);
    }
    else {
        printf("Error, Marque longitud y latitud valida");
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
