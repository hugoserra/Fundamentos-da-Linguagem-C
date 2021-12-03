/*Crie um programa para armazenar 10 nomes  em um vetor e imprimir uma lista numerada*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
  setlocale(LC_ALL,"");

  char nomes[10][16];
  for(int i = 0; i < 10; i++){
    printf("Digite um nome:");
    fgets(nomes[i],16,stdin);
    nomes[i][strcspn(nomes[i],"\n")] = '\0';
    setbuf(stdin,NULL);
  }//for
  printf("\n");
  for(int i = 0; i<10; i++){
    printf("Nome %d: %-16s\n",i+1,nomes[i]);
  }//for

  printf("\n");
  return 0;
}//main()
