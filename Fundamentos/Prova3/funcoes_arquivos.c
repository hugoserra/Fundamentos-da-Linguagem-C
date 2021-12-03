/*Escreva um programa que leia do usuário os nomes de dois arquivos texto.
Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos
(o conteúdo do primeiro seguido do conteúdo do segundo)*/

#include <stdio.h>
#include <stdlib.h>

 int main(){

   char ark1[50];//queria fazer usando malloc, para não usar mais nem menos memória que o necessario
   char ark2[50];//mas não consegui.

   FILE *ark1_ = fopen("ark.txt","r");//abre os arquivos
   FILE *ark2_ = fopen("ark2.txt","r");

   fgets(ark1,50,ark1_);//escreve 50 chars do arquivo em ark1/ark2
   fgets(ark2,50,ark2_);

   FILE *ark3_ = fopen("ark3.txt","w");//abre arquivo em modo escrita

   fputs(ark1,ark3_);//escreve ark1 em ark3_
   fputs(ark2,ark3_);//escreve ark2 em ark3_

   fclose(ark1_);//fecha arquivos
   fclose(ark2_);
   fclose(ark3_);

   return 0;
 }//main
