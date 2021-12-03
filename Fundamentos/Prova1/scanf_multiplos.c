/*Altere o exercício anterior para receber os 3 valores no mesmo scanf.
Exemplo:
Digite a conta a ser realizada: 5+8
O resultado é: 13*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  float numero1, numero2 = 0;
  char operador = '0';
  printf("Qual operação matemática você deseja realizar? (+,-,%,X):");//% dividir, X multiplicação,
                                                                      //mais comum para usuarios :P
  scanf("%f%c%f",&numero1,&operador,&numero2);

  switch (operador) {
    case '+':
      printf("A soma destes números é:%.2f\n",numero1+numero2);
    break;

    case '-':
      printf("A subtração destes números é:%.2f\n",numero1-numero2);
    break;

    case '%':
      printf("A divisão destes números é:%.2f\n",numero1/numero2);
    break;

    case 'X':
    case 'x':
      printf("A multiplicação destes números é:%.2f\n",numero1*numero2);
    break;

    default:
      printf("Operdador invalido.\n");



  return 0;
}

  return 0;
}
