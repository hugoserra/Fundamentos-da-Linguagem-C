/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual
a zero, um ponteiro nulo deverá ser retornado*/

#include <stdio.h>
#include <stdlib.h>

int vetorINT(tam){
  printf("Digite o tamanho de um vetor:");
  scanf("%i",&tam);

  int *vetor;
  if(tam<1)
    return vetor;
  else
    vetor = (int*) malloc(tam * sizeof(int));
  return vetor;

}//vetorINT

int main(){

  vetorINT(5);


  return 0;;
}//main
