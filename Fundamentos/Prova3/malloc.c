/*Elabore um programa que leia do usuário o tamanho de um vetor a ser lido.
Em seguida, faça a alocação dinâmica desse vetor.
Por fim, leia o vetor do usuário e o imprima.*/


#include <stdio.h>
#include <stdlib.h>

int main(){

  int tam = 0;
  printf("Digite o tamanho de um vetor:");
  scanf("%i",&tam);

  int *vetor;
  vetor = (int*) malloc(tam * sizeof(int));

  for(int i = tam; i>0; i--){
    printf("\nDigite o valor do elemnto Vetor[%i]:",i);
    scanf("%i",&vetor[i]);
  }//for(Preenche_vetor)

  printf("\n\n");
  for(int i =tam; i>0; i--){
    printf("Vetor[%i]: %i\n",i,vetor[i]);
  }//for(exibe_elementos_do_vetor)




  return 0;
}//main
