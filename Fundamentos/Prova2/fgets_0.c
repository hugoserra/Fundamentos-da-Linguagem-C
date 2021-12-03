/*Faça um programa que receba um nome e um sobrenome.
Ele deve construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
  setlocale(LC_ALL,"");
  char nome[10];
  char sobrenome[20];

  printf("Digite um nome:");
  fgets(nome,10,stdin);
  nome[strcspn(nome,"\n")]='\0';
  setbuf(stdin,NULL);

  printf("Digite um sobrenome:");
  fgets(sobrenome,10,stdin);
  sobrenome[strcspn(sobrenome,"\n")]='\0';
  setbuf(stdin,NULL);

  strcat(sobrenome,", ");
  strcat(sobrenome,nome);

  printf("\n\n%s\n\n",sobrenome);




  return 0;
}//main
