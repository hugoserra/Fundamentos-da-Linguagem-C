/*Crie uma função que retorne o fatorial de um número passado por parâmetro.

fatorial(n):

=1 se n=0

= n x fatorial (n-1) se n>0*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


//presumi que fosse com valores inteiros

int sinal = 0;
int multplic(int x,int y){
  if( ((x>0&&y>0)||(x<0&&y<0)) && sinal==0){
    sinal = 1;
  //  printf("NEG %i",sinal);
}else if(sinal==0){
    sinal = -1;
  }//ifelse_testa_resultado_negativo

  y = sqrt(y*y);
  x = sqrt(x*x)*sinal;

  if(y>1){//recursivo
    y--;
    return x+multplic(x,y);
  }else{//base
    return x;
  }//else
}//multplic

int fat(int x){
  if(x!=0){
    return multplic(x,fat(x-1));
  }else{
    return 1;
  }//else_d_if(x!=0)
}//fat

int main(){

  int a = fat(5);
  printf("---- %i ----\n",a);

  return 0;
}//main
