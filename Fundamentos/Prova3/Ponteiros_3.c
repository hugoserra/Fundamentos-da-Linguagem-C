/*Crie um programa que contenha uma matriz (3x3) de float.
Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float matriz[3][3];

  for(int x = 0; x<3; x++){
    for(int y = 0; y<3; y++){
      printf("Matriz[%d][%d] = %p\n",x,y,&matriz[x][y]);
    }//for(y)
  }//for(x)

  return 0;
}//main
