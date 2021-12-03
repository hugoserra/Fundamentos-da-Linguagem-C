/*Crie um programa de cadastro que receba, armazene, e em seguida, exiba os dados de 5 pessoas.
Cada pessoa possui: nome, idade, peso, data de nascimento, brasileiro ou estrangeiro.
Caso seja Brasileiro, armazene o CPF, caso estrangeiro, armazene o passaporte.

Regra: Utilize structs, typedef, union e enum.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

enum Nacionalidade {Brasileiro=1, Estrangeiro};

typedef union{
  int CPF[4];//armazenado em vetor pois facilita a digitação, e o calculo de validação, caso fosse um script mais completo
  char passaporte[20];
}Documentos;

typedef struct{
  char nome[15];
  int idade;
  float peso;
  int natalidade[3];
  enum Nacionalidade nacionalidade;
  Documentos documentos;


}Pessoa;

int main(){
  setlocale(LC_ALL,"");

  int modulo = 5;
  Pessoa pessoas[modulo];

  //modulo == tamanho do vetor pessoas
  for(int i = modulo; i>0; i--){
    //vetores são iniciados a partir do 0, i vale 5, entao i--; no inicio do laço. i++; no final, para não atrapalhar o contador.
    //printf("%i",i-1);
    i--;//por conta do vetor (pessoas)

    printf("\n\n---------------------------------------------------------\n");
    printf("-------------------Cadasto de número %i-------------------\n",i+1);/*i+1 apenas na exibição*/
    printf("---------------------------------------------------------\n");

    printf("\n\n-------------------------------------------\n");
    printf("Digite o nome da pessoa:");
    fgets(pessoas[i].nome,15,stdin);
    pessoas[i].nome[strcspn(pessoas[i].nome,"\n")] = '\0';
    setbuf(stdin,NULL);
    printf("-------------------------------------------\n");

    printf("\n\n-------------------------------------------\n");
    printf("Digite a idade de %s:",pessoas[i].nome);
    scanf("%d",&pessoas[i].idade);
    setbuf(stdin,NULL);
    printf("-------------------------------------------\n");

    printf("\n\n-------------------------------------------\n");
    printf("Digite o peso de %s:",pessoas[i].nome);
    scanf("%f",&pessoas[i].peso);
    setbuf(stdin,NULL);
    printf("-------------------------------------------\n");

    printf("\n\n-------------------------------------------\n");
    printf("Digite a data de nascimento de %s. \nExemplo: (00/00/00). Data:",pessoas[i].nome);
    //scan armazena a data em um vetor, natalidade[0] = dia, natalidade[1] = mes, natalidade[2] = ano
    scanf("%d/%d/%d",&pessoas[i].natalidade[0],&pessoas[i].natalidade[1],&pessoas[i].natalidade[2]);
    setbuf(stdin,NULL);
    printf("-------------------------------------------\n");

    printf("\n\n-------------------------------------------\n");
    printf("Digite a nacionalidade de %s.\n(1) Brasileiro (2) Estrangeiro:",pessoas[i].nome);
    scanf("%d",&pessoas[i].nacionalidade);
    setbuf(stdin,NULL);
    printf("-------------------------------------------\n");

    if (pessoas[i].nacionalidade == Brasileiro){
      printf("\n\n-------------------------------------------\n");
      printf("Digite o CPF %s:",pessoas[i].nome);
      scanf("%d.%d.%d-%d",&pessoas[i].documentos.CPF[0],&pessoas[i].documentos.CPF[1],&pessoas[i].documentos.CPF[2],&pessoas[i].documentos.CPF[3]);
      setbuf(stdin,NULL);
      printf("-------------------------------------------\n");
    }else{
      printf("\n\n-------------------------------------------\n");
      printf("Digite o Passaporte de %s:",pessoas[i].nome);
      fgets(pessoas[i].documentos.passaporte,20,stdin);
      pessoas[i].documentos.passaporte[strcspn(pessoas[i].documentos.passaporte,"\n")] = '\0';
      setbuf(stdin,NULL);
      printf("-------------------------------------------\n\n\n");
    }//else

    i++;//retomando o valor de i, para não atrapalhar no contagem do laço for
  }//for

  printf("\n\n---------------------------------------------------------\n");
  printf("---------------------DADO ARMAZENADOS--------------------\n");/*i+1 apenas na exibição*/
  printf("---------------------------------------------------------\n\n");

  //modulo == tamanho do vetor pessoas
  for(int i = modulo; i>0; i--){
    i--;//para não dar erro no vetor
    printf("\n\n-------------------------------------------\n");
    printf("Nome: %s\n",pessoas[i].nome);
    printf("Idade: %d\n",pessoas[i].idade);
    printf("Peso: %.2f\n",pessoas[i].peso);
    printf("Data de nascimento: %d/%d/%d\n",pessoas[i].natalidade[0],pessoas[i].natalidade[1],pessoas[i].natalidade[2]);
    if(pessoas[i].nacionalidade == Brasileiro){
      printf("Nacionalidade: Brasileiro\n");
      printf("CPF:%d.%d.%d-%d\n",pessoas[i].documentos.CPF[0],pessoas[i].documentos.CPF[1],pessoas[i].documentos.CPF[2],pessoas[i].documentos.CPF[3]);
    }else{
      printf("Nacionalidade: Estrangeiro\n");
      printf("Passaporte: %s\n",pessoas[i].documentos.passaporte);
    }//else
    printf("-------------------------------------------\n");

    i++;//para não atrapalhar o contador
  }//for2


  return 0;
}//main
