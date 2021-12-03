/*Elabore um programa que leia um arquivo binário contendo 100 números.
Mostre na tela a soma desses números*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *ark = fopen("arquivo.bin","rb");

  int soma = 0;
  int n_ark = 0;
  
  for(int i = 0; i<100; i++){
    fread(&n_ark,sizeof(int),1,ark);
    soma+=n_ark;
  }//for

  printf("%i\n",soma);
  return 0;
}//main
