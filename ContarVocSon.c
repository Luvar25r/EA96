//
// Created by YO on 08/01/2025.
//
#include <stdio.h>
#include <string.h>

//10 de Enero,
//1.- Convertir capacidad de palabras a frases
//2.- Corregir conteo de consonantes

char phrase[100];
char vocales[5]={'a','e','i','o','u'};
//nO SE BORRO

int countVowels(char *phrase) {
    int numvocales = 0;

//Este es el archivo correcto
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
    int flagvocal=0;
    //Primero contar letra por letra y despues comprobar si es vocal
    for (int i = 0;i<strlen(phrase) && phrase[i]!= "/0"; i++) { //Cuenta letra por letra
        int flagconsonante=0;
        for (int j=0;j<=5 && flagvocal==0 && flagconsonante==0;j++) { //Cuenta vocaleS
                if (phrase[i]==vocales[j]) {
                    flagvocal=1;
                }
                else {
                    numconsonantes++;
                    flagconsonante++;
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
        printf("El numero de vocales es %d y el numero de consonantes es %d",countVowels(phrase),countConsonants(phrase));
    }
}

int main() {
    getInput();
    return 0;
}