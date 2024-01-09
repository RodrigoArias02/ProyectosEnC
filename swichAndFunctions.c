#include <stdio.h>
#include <stdlib.h>

float suma(float a, float b);
float resta(float a, float b);
float m(float a, float b);
float dividir(float a, float b);

int main() {
    char tipooperacion;
    float a, b, resul;

    do {
        tipooperacion = ' ';
        a = 0;
        b = 0;
        resul = 0.00;

        printf("Ingrese el primer numero:\n");
        scanf("%f", &a);

        printf("Ingrese el segundo numero:\n");
        scanf("%f", &b);

        printf("Ingrese una operacion de estas *, /, +, -:\n");
        scanf(" %c", &tipooperacion);

        switch (tipooperacion) {
            case '+':
                resul = suma(a, b);
                break;
            case '-':
                resul = resta(a, b);
                break;
            case '*':
                resul = m(a, b);
                break;
            case '/':
                resul = dividir(a, b);
                break;
            default:
                printf("Operación incorrecta\n");
        }

        printf("El resultado de la operación es: %f\n", resul);
        printf("Ingrese la letra 's' para nueva operacion, o cualquier otra letra para salir:\n");
        scanf(" %c", &tipooperacion);

    } while (tipooperacion == 's' || tipooperacion == 'S');

    return 0;
}

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float m(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("No se puede dividir por cero.\n");
        return 0.0;
    }
}
