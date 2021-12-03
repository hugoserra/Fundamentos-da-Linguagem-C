/*Faça um algoritmo que implemente uma função que receba 3 números inteiros e retorne o
maior valor. Se algum número for negativo retorne -1;*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
*Verifica o maior valor digitado, ou algum valor negativo
*\n1 primeiro valor
*\n2 segundo valor
*\n3 terceiro valor
*\return o maior entre os 3 valores, ou -1, caso um dos valores seja negativo.
*/
int maiorvalor(int n1,int n2,int n3){
  int result = 0;
  int valores[3] = {n1,n2,n3};
  for (int i = 0; i<3; i++){
    if(valores[i]>0){
      if(valores[i]>result)
      result = valores[i];
    }else{
      return -1;
    }//else
  }//for
return result;
};//maiorvalor

int main(){
  setlocale(LC_ALL,"");
  int n1=0, n2=0, n3=0;
  printf("Digite 3 valores separados por "";"" Exemplo 0;0;0\nDigite os valores:");
  scanf("%d;%d;%d",&n1,&n2,&n3);
  setbuf(stdin,NULL);
  printf("\nO valor de retorno é:%d\n\n",maiorvalor(n1,n2,n3));
}//main
