/*Crie uma fun��o que que receba o valor de um inteiro positivo N,
calcule e retorne o fatorial desse n�mero.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int i){

  if(i==0)
  return 1;

  //c�digo abaixo calcula o fatorial de i, e salva em result
  int result = 1;
  for(i; i!=1; i--){
    result *= i;
  }//for
  return result;
  //-------------------

}//fatorial

int main(){
  setlocale(LC_ALL,"");
  int numero = 0;
  printf("Digite um n�mero:");
  scanf("%d",&numero);
  printf("O fatorial de %i � :%d\n\n",numero,fatorial(numero));

  return 0;
}//main
