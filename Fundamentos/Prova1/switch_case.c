/*Crie um programa que forneça um menu com duas opções. Caso o usuário digite 1, o programa
solicitará um número e verificará se o valor é par ou impar. Caso o usuário digite 2, o programa solicitará
uma idade e verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:
Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção:*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "");
  int escolha = 0;
  int par_impar = 0;
  int idade = 0;
  printf("1 – Verifica par/impar\n2 – Verifica maior/menor de idade\nDigite sua opção:");
  scanf("%i",&escolha);
  switch (escolha){

    case 1:
      printf("Digite um número:");
      scanf("%i",&par_impar);
      if (par_impar%2==0){
        printf("O número %i é par.\n\n",par_impar);
      }else{
        printf("O número %i é ímpar.\n\n",par_impar);
      }
    break;//case1

    case 2:
      printf("Digite sua idade:");
      scanf("%i",&idade);
      if (idade>=18){
        printf("Você é maior de idade!\n\n");
      }else{
        printf("Você é menor de idade!\n\n");
      }
    break;//case2

    default:
      printf("Opção invalida.\n\n");

  }//switch

  return 0;
}//main
