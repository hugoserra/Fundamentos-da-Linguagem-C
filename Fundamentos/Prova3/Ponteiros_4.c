/*Crie um programa que contenha um vetor de inteiros de tamanho 5.
Utilizando aritm�tica de ponteiros, leia os dados do teclado e exiba
seus valores multiplicado por 2. Em seguida, exiba o endere�o de mem�ria
das posi��es que cont�m valores pares.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"");

  int vetor[5];

  printf("Preencha o vetor:\n\n");

  for(int x = 0; x<5; x++){
    printf("\nVetor[%d] = :",x+1);
    scanf("%i",vetor+x);
    setbuf(stdin,NULL);
  }//for(preenche vetor)
  printf("\n-----------------\n");

  for(int x = 0; x<5; x++){
    printf("\nVetor[%d] = %d",x+1,*(vetor+x)*2);
  }//for(exibe vetor)
  printf("\n\n");

  return 0;
}//main
