/*Faça um programa que calcule o fatorial de um número a ser digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"");
  int real = 0;
  int fatorial = 1;
  printf("Digite um número:");
  scanf("%i",&real);
  while (!(real==1)){
    fatorial = real*fatorial;
    real--;
  }//while
  printf("%i\n",fatorial);

  return 0;
}//main()
