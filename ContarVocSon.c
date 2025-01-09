//
// Created by YO on 08/01/2025.
//
#include <stdio.h>

int countVowels(char* phrase){

  int vocales = 0;

  for(int i = 0; phrase[i] != '\0'; i++) {
    vocales++;
  }
  return vocales;

 }

int countConsonants(char* phrase){

  int consonantes = 0;

  for (int i = 0; phrase[i] != '\0'; i++) {
    consonantes++;
  }
  return consonantes;
}

void getInput(char* phrase){


  if (phrase == NULL){
    printf ("La frase está vacía");
  }
  else{
    countVowels(phrase);
    countConsonants(phrase);
  }
}

int main(){
  char* phrase;
  int vocales,consonantes;
  scanf ("%s", &phrase);

  getInput(phrase);

  printf ("El numero de vocales es %d y el numero de consonantes es %d",vocales,consonantes);

  return 0;
}