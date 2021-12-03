/*Considere a seguinte declaração:
   int a, *b, **c, ***d;
   Escreva um programa que receba o valor de a, calcule e exiba:

O dobro do valor a, utilizando o ponteiro b
O triplo do valor a, utilizando o ponteiro c
O quadruplo do valor a, utilizando o ponteiro d*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, *b, **c, ***d;

  printf("Digite o valor de A:");
  scanf("%i",&a);
  setbuf(stdin,NULL);
  
  printf("A = %i\n",a);

  b = &a;
  *b=(*b)*2;
  printf("B = %i\n",*b);

  c = &b;
  **c = (**c)/2*3;
  printf("C = %i\n",**c);

  d = &c;
  ***d = (***d)/3*4;
  printf("D = %i\n",***d);



  return 0;
}//main
