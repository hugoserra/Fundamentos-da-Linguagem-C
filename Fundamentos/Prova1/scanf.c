/*Faça um programa que receba a altura de uma pessoa e calcule e exiba seu peso ideal utilizando a
seguinte fórmula:
peso ideal = 72.7 x altura – 58*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float altura = 0;
  printf("Digite sua altura:");
  scanf("%f",&altura);
  float peso_ideal = 72.7*altura - 58;
  printf("Seu peso ideal e: %.2f\n\n",peso_ideal);

  return 0;
}
