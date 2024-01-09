#include <stdio.h>

int main() {
    int i;
    int c = 0;
    char nombre[20];

    printf("Digite una palabra: ");
    scanf("%s", nombre);

    printf("La palabra ingresada es: %s\n", nombre);

    for (i = 0; i < 20 && nombre[i] != '\0'; i++) {
        switch (nombre[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                c++;
                break;
        }
    }

    printf("La cantidad de vocales son %d\n", c);

    return 0;
}
