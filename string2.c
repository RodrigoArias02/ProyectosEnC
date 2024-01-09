#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//alumno: Rodrigo Arias
int main()
{
    int a,e,i,o,u;
    char nombre[30], pegar1[40];

    printf("digite una palabra ");
    scanf("%s",&nombre[0]);
    a=strlen(nombre);
    strcpy(pegar1, nombre);
    strcat(pegar1, "\n");

    printf("digite una palabra ");
    scanf("%s",&nombre[0]);
    e=strlen(nombre);
    strcat(pegar1, nombre);
    strcat(pegar1, "\n");

    printf("digite una palabra ");
    scanf("%s",&nombre[0]);
    i=strlen(nombre);
    strcat(pegar1, nombre);
    strcat(pegar1, "\n");

    printf("digite una palabra ");
    scanf("%s",&nombre[0]);
    o=strlen(nombre);
    strcat(pegar1, nombre);
    strcat(pegar1, "\n");

    printf("digite una palabra ");
    scanf("%s", &nombre[0]);
    u=strlen(nombre);
    strcat(pegar1, nombre);

    printf("PALABRAS INGRESADAS\n");
    printf("%s\n", pegar1);
    printf("Numero de letras de la primera palabra %d\n",a);
    printf("Numero de letras de la segunda palabra %d\n",e);
    printf("Numero de letras de la tercera palabra %d\n",i);
    printf("Numero de letras de la cuarta palabra %d\n",o);
    printf("Numero de letras de la quinta palabra %d\n",u);

    return 0;
}