/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta,
seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas
e os armazene em um arquivo bin�rio*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

  printf("Digite as informações de 5 atletas.\n\n");

  for(int i = 0; i<5; i++){

    printf("\n-----------------------------------------------------\n");

    printf("Digite o nome do %i° atleta:",i+1);
    fgets(atletas[i].nome,10,stdin);
    atletas[i].nome[strcspn(atletas[i].nome,"\n")] = '\0';
    setbuf(stdin,NULL);

    printf("Digite o esporte do %i° atleta:",i+1);
    fgets(atletas[i].esporte,10,stdin);
    atletas[i].esporte[strcspn(atletas[i].esporte,"\n")] = '\0';
    setbuf(stdin,NULL);

    printf("Digite a idade do %i° atleta:",i+1);
    scanf("%i",&atletas[i].idade);
    setbuf(stdin,NULL);

    printf("Digite a altura do %i° atleta:",i+1);
    scanf("%f",&atletas[i].altura);
    setbuf(stdin,NULL);

    printf("-----------------------------------------------------\n");
  }//for

  FILE *ark = fopen("arquivo.bin","wb");

  for(int i =0; i<5; i++){
    fwrite(&atletas[i],sizeof(Atleta),1,ark);//armazena o elemento i do vetor de Atletas
  }//for

  printf("\nDados salvos em 'arquivo.bin'.\n\n");

  fclose(ark);

  return 0;
}//main
