//
// Created by YO on 08/01/2025.
//
#include <stdio.h>
#include <string.h>
char phrase[100];
char vocales[5]={'a','e','i','o','u'};

int countVowels(char *phrase) {
    int numvocales = 0;


    for (int j=0;j<=5;j++) {
        for (int i = 0;i<strlen(phrase); i++) {
            if (phrase[i] == vocales[j]) {
                numvocales++;
            }
        }
    }

    /*
     *1.-Leer letra de la cadena
     *2.- Comprobar si es a,e, i, u
     *3.- Siguiente letra
    */
    return numvocales;
}


int countConsonants(char *phrase) {
    int numconsonantes = 0;

    //Primero contar letra por letra y despues comprobar si es vocal

    for (int i = 0;i<strlen(phrase); i++) { //Cuenta letra por letra
        for (int j=0;j<=5;j++) { //Cuenta vocales
            if (phrase[i]!=vocales[j]) {
                numconsonantes++;
            }
        }
    }
    return numconsonantes;
}

void getInput() {

    scanf("%s", &phrase);

    if (phrase == NULL) {
        printf("La frase está vacía");
    }
    else {
        countVowels(phrase);
        countConsonants(phrase);
    }
}

int main() {


    getInput();

    int numvocales=countVowels(phrase);
    int numconsonantes=countConsonants(phrase);


    printf("El numero de vocales es %d y el numero de consonantes es %d", numvocales,numconsonantes);

    return 0;
}
