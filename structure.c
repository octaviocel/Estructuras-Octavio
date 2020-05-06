#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

 typedef struct persona
{
    unsigned long int id_persona;
    char nombre[100];
    char direccion[100], escolaridad[20], religion[50];
    char sexo;
    unsigned short int edad;

} Persona;
int main()
{
    Persona array_de_personas[10];
	//Persona una_persona;
    char c;
    FILE *aarchivo;

    aarchivo = fopen("miarchivo.bin", "r");
    if(aarchivo == NULL)
    {
        printf("Este archivo esta vacio, asi que debera rellenarlo:\n");
        for(int i=0; i<10; i++)
        {
        array_de_personas[i].id_persona = 1;
        printf("Introduzca su nombre completo:\n");
        fgets(array_de_personas[i].nombre, 99,stdin);
        printf("Introduzca el sexo de la persona [H/M]:\n");
        array_de_personas[i].sexo = getc(stdin);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
        printf("Introduzca la direccion:\n");
        fgets(array_de_personas[i].direccion, 99,stdin);
        printf("Introduzca la religion:\n");
        fgets(array_de_personas[i].religion, 49,stdin);
        printf("Introduzca la escolaridad:\n");
        fgets(array_de_personas[i].escolaridad, 19,stdin);
        printf("Introduzca la edad:\n");
        scanf("%hu", &array_de_personas[i].edad);
        while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada

        fwrite(array_de_personas, sizeof(Persona), 10, aarchivo);
        }
    } else
        printf("%s", array_de_personas);
   // aarchivo = fopen("miarchivo.bin", "w");
    //if(aarchivo == NULL)
   // {
   //     printf("Error al abrir archivo.\n");
  //      return(1);
   // }

    //fwrite(array_de_personas, sizeof(Persona), 10, aarchivo);


    fclose(aarchivo);
}


