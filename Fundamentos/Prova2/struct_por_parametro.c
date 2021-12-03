/*Reescreva o exercício anterior utilizando a estrutura horário
(contendo hora, minuto e segundo) e passando a estrutura por referência.
Utilize o seguinte protótipo da função:
void converteHorario(int total_segundos, Horario* hor)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct{
  int hora;
  int min;
  int seg;
}Horario;

void converteHorario(int total_segundos, Horario* hor){

  hor->hora = total_segundos/3600;
  hor->min = (total_segundos/60)%60;
  hor->seg = (total_segundos%60);

}//converteHorario


int main(){
  setlocale(LC_ALL,"");
  Horario hor;

  hor.hora = 0;
  hor.min = 0;
  hor.seg = 0;

  int total_segundos = 0;

  setlocale(LC_ALL,"");
  printf("Digite o total de segundos:");
  scanf("%d",&total_segundos);

  converteHorario(total_segundos,&hor);

  printf("\n\nO tempo recebido, em horas vale: [%.2d:%.2d:%.2d]\n\n",hor.hora,hor.min,hor.seg);

  return 0;
}//main
