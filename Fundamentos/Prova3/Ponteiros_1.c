/*Escreva um programa que contenha duas variáveis inteiras.
Compare os endereços e exiba o endereço e o conteúdo do maior endereço.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  int v1 = 0;
  int v2 = 0;

  if(&v1>&v2)
    printf("Endereço de v1: %p. Valor: %i",&v1,v1);
  else
    printf("Endereço de v2: %p. Valor: %i",&v2,v2);


  return 0;
}//main
