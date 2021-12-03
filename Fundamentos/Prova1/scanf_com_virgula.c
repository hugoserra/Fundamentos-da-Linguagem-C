/*Calcule a média aritmética de 4 números reais que o usuário digitar.
Imprima a média na tela apenas com 2 casas decimais.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("Digite 4 numeros reais separados por virgula. Exemplo (1,2,3,4):");
  float n1,n2,n3,n4 = 0;
  scanf("%f,%f,%f,%f",&n1,&n2,&n3,&n4);
  float media = (n1+n2+n3+n4)/4;
  printf("A media dos numeros digitados e:%.2f\n\n",media);


  return 0;
}
