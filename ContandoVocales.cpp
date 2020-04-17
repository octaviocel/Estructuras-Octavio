// ContandoVocales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#define t 500 

void mima(char string[]);
int main()
{
	int a=0, e=0, i=0, o=0, u=0;
    char cad[t];
	char *p;
    //fgets(cad, t, stdin);
    gets_s(cad);
	mima(cad);
	p = cad;
	while (*p != '\0')
	{
		if (*p == 'a')a++;
		if (*p == 'e')e++;
		if (*p == 'i')i++;
		if (*p == 'o')o++;
		if (*p == 'u')u++;
		p++;	
	}
	printf("%d %d %d %d %d", a, e, i, o, u);
}

void mima(char string[])
{
	int i = 0;
	int m = 'A' - 'a';
	for (i = 0; string[i] != '\0'; ++i)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] = string[i] - m;
		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
