/*Crie uma enumeração representando os meses do ano. Agora, escreva
um programa que leia um valor inteiro do teclado e exiba o nome do mês
correspondente e a quantidade de dias que ele possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"");
  enum Ano {Janeiro=1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

  printf("Digite o número do mês:");
  int numero_mes = 0;
  scanf("%d",&numero_mes);
  setbuf(stdin,NULL);

  switch (numero_mes) {
    case Janeiro:
    printf("\nJaneiro possui 31 dias.\n\n");
    break;//Janeiro
    case Fevereiro:
    printf("\nFevereiro possui 28 ou 29 dias.\n\n");
    break;//Fevereiro

    case Marco:
    printf("\nMarço possui 31 dias.\n\n");
    break;//Março

    case Abril:
    printf("\nAbril possui 30 dias.\n\n");
    break;//Abril

    case Maio:
    printf("\nMaio possui 31 dias.\n\n");
    break;//Maio

    case Junho:
    printf("\nJunho possui 30 dias.\n\n");
    break;//Junho

    case Julho:
    printf("\nJulho possui 31 dias.\n\n");
    break;//Julho

    case Agosto:
    printf("\nAgosto possui 31 dias.\n\n");
    break;//Agosto

    case Setembro:
    printf("\nSetembro possui 30 dias.\n\n");
    break;//Setembro

    case Outubro:
    printf("\nOutubro possui 31 dias.\n\n");
    break;//Outubro

    case Novembro:
    printf("\nNovembro possui 30 dias.\n\n");
    break;//Novembro

    case Dezembro:
    printf("\nDezembro possui 31 dias.\n\n");
    break;//Dezembro
  }//switch


  return 0;
}//main
