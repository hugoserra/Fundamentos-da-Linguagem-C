/*Crie um programa que contenha um vetor float (tamanho 10).
Imprima o endereço de cada posição desse vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"");

  float vetor[10];
  for(int i = 0; i<10; i++){
    printf("Vetor[%i] = %p\n",i,&vetor[i]);
  }//for
  return 0;
}//main
