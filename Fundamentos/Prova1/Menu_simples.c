/*Faça um menu que mostre 3 opções

Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:

A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
A segunda opção imprime “Teste2” e mostra o menu novamente.
A terceira opção finaliza o programa.
Caso digite uma opção diferente, deve mostrar uma mensagem de erro e mostrar o menu novamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"");
  int opcao = 0;
  while(opcao!=3){
    printf("1 - Teste 1\n2 - Teste 2\n3 - Sair do programa.\nDigite sua opção:");
    scanf("%i",&opcao);
    switch (opcao) {
      case 1:
        printf("\n\nTeste1\n\n");
      break;

      case 2:
        printf("\n\nTeste2\n\n");
      break;

      case 3:
        printf("\n\nPrograma finalizado\n");
      break;

      default:
        printf("\n\nOpção invalida.\n\n");
    }
  }


  return 0;
}
