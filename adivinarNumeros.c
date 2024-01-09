#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
bool repetido(int numero, int i); //creamos el prototipo de la funcion
static int vector[100]={};//creamos el arreglo de forma global  para no pasarlo por parametros

bool tristefinal(int c);
static int vector2[10]={};

bool adivinado(int numero, int almacen);
//El programa consiste en generar un numero aleatorio el cual el usuario debe adivinar mediante una cantidad limite de 10 intentos por usuario
int main()
{
int aleatorio[1];
int i;
int c=1;
int almacen;
int usuario;
int guardar[10];
int numero;
        srand (time(NULL));
        for(i=0;i<1;i++)
            {
         aleatorio[i]=1+rand()%(100-1+1); //variable=limie_inferior+rand()%(limite superior-limite_inferior + 1)
        printf("aleatorio %d\n", aleatorio[i]);
        almacen = aleatorio[i];
            }
    printf("ingrese numero de usuario del 1 al 256\n");
               scanf ("%d", &usuario);

                if (usuario>256)
                    {
                printf("numero de usuario muy alto, ingrese otro usuario del 1 al 256\n");
                scanf ("%d", &usuario);
                    }
                for(i=1;i<100;i++)
                {
                printf("ingrese un numero \n");
                scanf("%d", &numero);

                  if (i % 10 == 0 && i >= 10 && i <= 100)
                  {
                    printf("intentos terminados, ingrese otro usuario del 1 al 256\n");
                    scanf ("%d", &usuario);

                        if (usuario>256)
                        {
                        printf("numero de usuario muy alto, ingrese otro usuario del 1 al 256\n");
                        scanf ("%d", &usuario);
                        guardar[i]=usuario;
                        }
                            if (usuario==guardar[i])
                            {
                            printf("Numero de usuario repetido, ingrese otro usuario del 1 al 256\n");
                            scanf ("%d", &usuario);
                            }
                  }
                    while (repetido(numero,i))//creamos un while que cuando repetido devuelve un true el numero esta repetido
                    {
                    printf("numero repetido\n"); //si da falso nunca entrara en ese while
                    printf("ingrese OTRO numero\n");
                    scanf ("%d", &numero);
                    }
                        while(adivinado(numero,almacen))
                        {
                        printf("ADIVINASTE LA CLAVE, SALVASTE AL MUNDO\n");
                        return 0;
                        }
                    vector[i] = numero; //que asigna el numero que digito el usuario al vector

                            while(tristefinal(c))
                            {
                            printf("HEMOS PERDIDO LA BATALLA PERO NO LA GUERRA\n");
                            return 0;
                            }
                  }
    return 0;
}

bool repetido (int numero, int i)//creamos la funcion que va a recibir a *numero* y a *i*
{
    for(int x=0; x<i; x++) //mediante un for se recorre el arreglo a ver si se repite o no, es menor que i porque solo a llenado
    { //hasta esa posicion
      if (numero == vector[x])
      {
       return true;
      }
    }
    return false;
}

bool adivinado (int numero, int almacen)
{
      if (numero == almacen)
        {
       return true;
        }
    return false;
}
bool tristefinal(int c)
{
      if (c>=10)
        {
       return true;
        }
    return false;
}