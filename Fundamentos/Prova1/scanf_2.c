/*Fa�a um programa que receba um n�mero e determine se ele � um n�mero par ou �mpar.
 (Para isso utilize o operador % que retorna o resto da divis�o)*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 int main(){
   setlocale(LC_ALL,"");
   int numero = 0;
   printf("Digite um n�mero:");
   scanf("%i",&numero);
   if((numero%2) == 0)
     printf("O numero %i � par.\n",numero);
   else
     printf("O numero %i � �mpar.\n\n",numero);

   return 0;
 }
