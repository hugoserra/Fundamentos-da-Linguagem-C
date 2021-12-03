/*Faça um programa que receba os coeficientes A, B e C de uma equação do segundo grau e retorne as raízes da equação (se existirem).
Para isso, lembre-se da fórmula de Báskara:*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
  setlocale(LC_ALL,"");
  float a,b,c = 0;
  printf("Digite o valor de A:");
  scanf("%f",&a);
  printf("\nDigite o valor de B:");
  scanf("%f",&b);
  printf("\nDigite o valor de C:");
  scanf("%f",&c);

  //(-b+-raiz de b.b -4.a.c)/(2.a)
  float delta = pow(b,2) -4*a*c;
  if(delta>0){
    float x1 = ((-b)+(sqrt(delta)))/(a*2);//1 raiz de x
    float x2 = ((-b)-(sqrt(delta)))/(a*2);//2 raiz de x
    printf("x' %f\n",x1);
    printf("X'' %f\n",x2);
  }else if(abs(delta) == 0){
    float x1 = -b/2*a;
    printf("\nraiz %f\n\n",x1);
  }else{
    printf("\nA equação não possui raizes reais.\n\n");
  }
}
