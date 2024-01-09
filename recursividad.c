#include <stdio.h>
#include <stdlib.h>
///Alumnos: Arias Rodrigo
int recursividad(int numero);
int main()
{
    int numero;
    printf("Ingresar Numero\n");
    scanf("%d", &numero);
    recursividad(numero);
    return 0;
}
int recursividad(int numero){
    if(numero>0){
    printf("%d ", numero);
    numero--;
    recursividad(numero);
    }
    return 0;
}