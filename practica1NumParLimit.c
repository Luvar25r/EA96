//
// Created by YO on 08/01/2025.
//
#include <stdio.h>

void generateEvenNumbers(int limit) {
    printf("Los numeros pares a mostrar son: \n");
    for (int i = 1; i <= limit; i++) {
        if ((i % 2) == 0) {
            printf("%d\n", i);
        }
    }
}

//---------------------------------------------------
void validatePositiveInt(int limit) {
    if (limit <= 0) {
        printf("NumLimitUser debe ser un numero mayor a 0\n");
    } else {
        generateEvenNumbers(limit);
    }
}

//-----------------------------------------------

int main() {
    int limit;
    char RepOExit = 'r';

    for (; RepOExit == 'r' || RepOExit == 'R';) {
        printf("Inserte el numero limite donde los pares se dejaran de mostrar: ");
        scanf("%i", &limit);
        validatePositiveInt(limit);

        printf("\nDesea Repetir el programa (R) o Salir (S) ?: \n");
        scanf("\n");
        scanf("%c", &RepOExit);

        for (; RepOExit != 'r' && RepOExit != 'R' && RepOExit != 'S' && RepOExit != 's';) {
            printf("Caracter invalido, introduzca unicamente (R) o (S)\n\n");
            printf("-------------------------------------------------------\n");
            scanf("%c", &RepOExit);
        }
    }
    printf("Saliendo...");
    return 0;
}
