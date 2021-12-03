/*Considerando a estrutura atleta do exercício anterior, escreva um programa
que leia um arquivo binário contendo os dados de cinco atletas. Calcule e
exiba o nome do atleta mais alto e do mais velho.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
  char nome[10];
  char esporte[15];
  int idade;
  float altura;
}Atleta;

int main(){
  setlocale(LC_ALL,"");

  Atleta atletas[5];

  FILE *ark = fopen("arquivo.bin","rb");

  if(ark==NULL){
    printf("Erro! o Arquivo não existe.");
    exit(1);
  }//if

  for(int i = 0; i<5; i++){
    fread(&atletas[i],sizeof(Atleta),1,ark);
  }//for

  int maior_idade = atletas[0].idade;
  int elemento_idade = 0;

  float maior_altura = atletas[0].altura;
  int elemento_altura = 0;

  for(int i = 0; i<5; i++){
    if(maior_idade<=atletas[i].idade){
      maior_idade = atletas[i].idade;
      elemento_idade = i;
    }//if

    if(maior_altura<=atletas[i].altura){
      maior_altura = atletas[i].altura;
      elemento_altura = i;
    }
  }//for

  printf("O atleta mais velho é: %s; com %i anos\n\n",atletas[elemento_idade].nome,maior_idade);
  printf("O atleta mais alto é %s; com %.2f de altura.\n\n\n",atletas[elemento_altura].nome,maior_altura);

  fclose(ark);
  return 0;
}//main
