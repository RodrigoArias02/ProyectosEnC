#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    float resultado;
    char l[2]=" ";
    a=0;
    b=0;
    resultado=0;
    printf("ingrese un numeros reales\n");
    scanf("%d", &a);
    printf("ingrese otro numeros reales\n");
    scanf("%d", &b);
    printf("ingrese la operacion deseada +,-,*,/ \n");
    scanf("%s", &l);

    switch(l[0])
    {
        case '+': resultado=a+b;
        printf(" %f\n",resultado);
        break;

        case '-': resultado=a-b;
        printf(" %f\n",resultado);
        break;

        case '*': resultado=a*b;
        printf(" %f\n",resultado);
        break;

        case '/': resultado=a/b;
        printf(" %f\n",resultado);
        break;

    }
    return 0;
}