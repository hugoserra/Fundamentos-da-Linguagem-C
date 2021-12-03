/*Crie uma fun��o que retorne x elevado a y atrav�s de opera��o de multiplica��o.
A fun��o recebe x e y por par�metro*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pp(float x,float y){

  if(y>0)
  {
    if(y>1){
      y--;
      return x*pp(x,y);
    }else{
      return x;
    }//else_d_if(y>1)
  }
  else
  {
    if(y<-1){
      y++;
      return (1/x)*pp(x,y);
    }else{
      return (1/x);
    }//else_d_if(y<1)
  }//else_d_if(y>0 )


}//pp

int main(){
  setlocale(LC_ALL,"");

  printf("\n\n%f\n\n",pp(-3,1));

  return 0;
}//main
