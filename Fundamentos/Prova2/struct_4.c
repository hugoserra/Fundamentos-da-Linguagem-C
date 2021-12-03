/*Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:

–Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em kW)
e tempo ativo por dia (real, em horas).

–Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada
eletrodoméstico (consumo/consumo total) nesse período de tempo. Apresente este último dado em porcentagem.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


typedef struct{
  char nome[15];
  float potencia;//por hora
  float horas;
  float minutos;
  float segundos;
  float consumo;//consumo por hora
  float consumo_total_relativo;//consumo de todos os dias, relativo a este aparelho
  float tempo_total_em_horas;//tempo total calculado apenas em horas, exemplo 01:30 = 1,5
}Eletrodomesticos;

int main(){
  setlocale(LC_ALL,"");
  int modulo = 5;
  Eletrodomesticos eletrodomesticos[modulo];

  for(int count = 0; count<5; count++){
    printf("--------------------------------------------\n");
    printf("Digite o %i� eletrodom�stico:",count+1);
    scanf("%s",eletrodomesticos[count].nome);
    setbuf(stdin,NULL);

    printf("Digite a pot�ncia para %s (kW):",eletrodomesticos[count].nome);
    scanf("%f",&eletrodomesticos[count].potencia);
    setbuf(stdin,NULL);

    printf("Digite o tempo ativo por dia Exemplo 01:40:45:");
    scanf("%f:%f:%f",&eletrodomesticos[count].horas,&eletrodomesticos[count].minutos,&eletrodomesticos[count].segundos);
    setbuf(stdin,NULL);
    printf("--------------------------------------------\n\n");

    //o calculo abaixo transforma as variaveis de horas minutos e segundos apenas em horas.

    eletrodomesticos[count].tempo_total_em_horas = eletrodomesticos[count].horas+eletrodomesticos[count].minutos/60+eletrodomesticos[count].segundos/60/60;

    //atribui valer ou consumo, fazendo pontencia*horas
    eletrodomesticos[count].consumo = eletrodomesticos[count].potencia*eletrodomesticos[count].tempo_total_em_horas;

  }//for

  printf("\n\nDigite quantos dias os aparelhos ficar�o ligados:");
  int dias = 0;
  scanf("%d",&dias);

  float consumo_total_geral = 0;

  //modulo = tamanho do vetor eletrodomesticos
  for(int i = modulo; i!=0; i--){
    //printf("%i",i);
    //i vai de 5 até 1
    // i-1 no indice do vetor eletrodomesticos, para ir de 4 até 0

    //consumo_total_relativo = //consumo de todos os dias, relativo a este aparelho
    eletrodomesticos[i-1].consumo_total_relativo = eletrodomesticos[i-1].consumo*dias;

    //consumo_total_geral = soma do consumo total relativo de todos os aparelhos
    consumo_total_geral += eletrodomesticos[i-1].consumo_total_relativo;
  }//for

  //for abaixo apenas para facilitar exibição
  for(int i = modulo; i!=0; i--){
    printf("\n\nO consumo para %s foi:%.2f%%",eletrodomesticos[i-1].nome,(eletrodomesticos[i-1].consumo_total_relativo/consumo_total_geral*100));
  }//for
  printf("\n\nO consumo total foi:%.2fkw\n\n",consumo_total_geral);

  return 0;
}//main
