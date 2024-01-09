#include <stdio.h>
#include <stdlib.h>

int main() {
    char operacion;
    float numero1, numero2, resultado;

    do {
        operacion = ' ';
        numero1 = 0;
        numero2 = 0;
        resultado = 0.00;

        printf("Ingrese el primer numero:\n");
        scanf("%f", &numero1);

        printf("Ingrese el segundo numero:\n");
        scanf("%f", &numero2);

        printf("Ingresa una de estas operaciones (*, /, +, -):\n");
        scanf(" %c", &operacion);  // Corregido: %c en lugar de %s

        switch (operacion) {
            case '*':
                resultado = numero1 * numero2;
                break;
            case '/':
                resultado = numero1 / numero2;
                break;
            case '+':
                resultado = numero1 + numero2;
                break;
            case '-':
                resultado = numero1 - numero2;
                break;
            default:
                printf("Operación Incorrecta\n");
        }

        printf("El resultado de la operación es: %f\n", resultado);
        printf("Ingrese 's' para continuar, o cualquier otra letra para salir:\n");

        // Limpiar el búfer de entrada
        while (getchar() != '\n');

        scanf(" %c", &operacion);

    } while (operacion == 's' || operacion == 'S');

    return 0;
}
