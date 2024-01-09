#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//alumno: Rodrigo Arias
int main()
{
    int aleatorio;
    int j, x;
    int almacen[3][10]; //pongo cuatro columnas porque sino no se muestra bien
    srand (time(NULL));
    for(x=0;x<2;x++) //recorre la columna
    {
        for(j=0;j<10;j++) //recorre la fila
        {
            aleatorio=1+rand()%(10+1); //genera numero aleatorio
            almacen[x][j]=aleatorio; //guarda los numeros aleatorios en cada fila de las 2 primeras columnas
        }
    }
     for(j=0;j<10;j++) //recorre la fila
     {
            almacen[2][j]=almacen[0][j]+almacen[1][j]; //almacena en la columna 3 cada suma de cada fila
     }
        for(x=0;x<3;x++) //recorre la columna
    {
           for(j=0;j<10;j++) //recorre la fila
           {
              printf("%d  ", almacen[x][j]); //muestra las 10 filas de la columna 0 y 2
           }
        printf("\n"); //separacion entre columnas
    }

    return 0;
}