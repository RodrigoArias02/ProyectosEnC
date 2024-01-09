#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
//alumno: Rodrigo Arias
int numeros(int a[][5], int j, int x); //cramos un arreglo para que reciba la informacion mandada. j y x son los dos elementos
int main()                             //que se envian
{
    char mostrar;
    int par, impar;
    int j, x;
    int almacen[5][5];
    int a_resultados[2][25];
    numeros(almacen, 5, 5); //se envia el tamaño del arreglo a la funcion.
    par=0;
    mostrar=' ';
    impar=0;
    for(x=0;x<5;x++)
    {
        for(j=0;j<5;j++)
        {
            if(almacen[x][j]%2==0)
            {
                a_resultados[0][par]=almacen[x][j];
                par=par+1;
            }else{
            a_resultados[1][impar]=almacen[x][j];
                impar=impar+1;
            }
        }
    }
    do
    {
        printf("\n");
        printf("Ingrese la letra P para ver solo los pares, ingrese la letra I para ver los impares o la letra T para ver todos \n");
        scanf("%s", &mostrar);
        if(toupper(mostrar)=='P')
        {
            printf("PARES:\n");
            for(j=0;j<par;j++)
            {
                printf("%d ", a_resultados[0][j]);
            }
        }else
        if(toupper(mostrar)=='I')
        {
            printf("IMPARES:\n");
            for(j=0;j<impar;j++)
            {
                printf("%d ", a_resultados[1][j]);
            }
        }else
        if(toupper(mostrar)=='T')
        {
            printf("PARES:\n");
            for(j=0;j<par;j++)
            {
                printf("%d ", a_resultados[0][j]);
            }
            printf("\n");
            printf("IMPARES:\n");
            for(j=0;j<impar;j++)
            {
                printf("%d ", a_resultados[1][j]);
            }
        }else
         {
            printf("letra incorrecta\n");
         }
    }while(toupper(mostrar)!='T' || toupper(mostrar)!='I' || toupper(mostrar)!='P');
    printf("\n");
    return 0;
}

int numeros( int a[][5], int j, int x){
int aleatorio;
a[j][x]; //se pone x y j porque es el elemento que enviamos o sea [5][5].
    srand (time(NULL));
    for(x=0;x<5;x++)
    {
        for(j=0;j<5;j++)
        {
            aleatorio=1+rand()%(10+1);
            a[x][j]=aleatorio;
        }
    }
printf("NUMEROS ALEATORIOS:\n");
    for(x=0;x<5;x++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d  ", a[x][j]);
        }
        printf("\n");
    }
  return 0;
}