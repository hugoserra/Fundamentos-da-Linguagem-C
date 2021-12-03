/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

typedef struct{
  float x;
  float y;
}Ponto;

int main(){
  setlocale(LC_ALL,"");

  Ponto ponto1 = {0,0};
  Ponto ponto2 = {0,0};

  printf("Digite o ponto A, exemplo(x;y):");
  scanf("(%f;%f)",&ponto1.x,&ponto1.y);
  setbuf(stdin,NULL);

  printf("\n\nPonto A = (%f.%f)\n\n",ponto1.x,ponto1.y);

  printf("\n\nDigite o ponto B, exemplo(x.y):");
  scanf("(%f;%f)",&ponto2.x,&ponto2.y);
  setbuf(stdin,NULL);

  printf("\n\nPonto B = (%f;%f)\n\n",ponto2.x,ponto2.y);

  float distancia = sqrt((pow(ponto2.x,2)-pow(ponto1.x,2))+(pow(ponto2.y,2)-pow(ponto1.y,2)));

  printf("\nA distancia entre os pontos � %.2f\n\n",distancia);

  return 0;
}//main
