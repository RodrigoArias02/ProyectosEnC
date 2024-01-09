#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//alumno: Rodrigo Arias
int main()
{
    int c=0,i,j, encontrado;
    char usuario[50];
    char nombre[5][50];
    c=0;
            while(c<5)
            {
                printf("digite una palabra ");
                scanf("%s",usuario);
                encontrado=1;
                j=0;
                    while(j<c && encontrado!=0)
                    {
                        encontrado=strcmp(usuario, nombre[j]);
                        j++;
                    }
                    if(encontrado==0)
                    {
                        printf("usuario ingresado ya \n");
                    }else
                    {
                        strncpy(nombre[c], usuario,strlen(usuario));
                        c++;
                        printf("%d\n",c);
                        printf("usuario ingresado con exito \n");
                        i=i+1;
                    }
            }
    return 0;
}