/*Faça um programa que receba um número e determine se ele é um número par ou ímpar.
 (Para isso utilize o operador % que retorna o resto da divisão)*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 int main(){
   setlocale(LC_ALL,"");
   int numero = 0;
   printf("Digite um número:");
   scanf("%i",&numero);
   if((numero%2) == 0)
     printf("O numero %i é par.\n",numero);
   else
     printf("O numero %i é ímpar.\n\n",numero);

   return 0;
 }
