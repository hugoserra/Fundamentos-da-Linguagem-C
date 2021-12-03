/*Escreva um programa que receba um número inteiro representando a quantidade
total de segundos e, usando passagem de parâmetros por referência, converta a
quantidade informada de segundos em Horas, Minutos e Segundos. Imprima o resultado
da conversão no formato HH:MM:SS. Utilize o seguinte protótipo da função:
void converteHora(int total_segundos, int* hora, int* min, int* seg)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void converteHora(int total_segundos, int* hora, int* min, int* seg){

  (*hora) = total_segundos/3600;
  (*min) = (total_segundos/60)%60;
  (*seg) = (total_segundos%60);

}//void_converteHora


 int main(){

   int hora = 0;
   int min = 0;
   int seg = 0;

   int total_segundos = 0;

   setlocale(LC_ALL,"");
   printf("Digite o total de segundos:");
   scanf("%d",&total_segundos);

   converteHora(total_segundos,&hora,&min,&seg);

   printf("\n\nO tempo recebido, em horas vale: [%.2d:%.2d:%.2d]\n\n",hora,min,seg);

   return 0;
 }//main
