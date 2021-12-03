/*Crie uma função que retorne x*y através de operação de soma. A função recebe x e y por parâmetro*/

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


int main(){
  setlocale(LC_ALL,"");
  int a = 0;

  a = multplic(2,4);
  printf("%i\n\n",a);

  return 0;
}//main
