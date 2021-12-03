/*(Valor: 10 pontos) Fa�a um algoritmo textual e implemente um c�digo que:

Exiba, uma �nica vez, um menu com duas op��es:

a) Pre�o da ma��
b) Verifica Vogal

E pe�a a op��o desejada ao usu�rio

    a) Na primeira op��o, o programa deve receber a quantidade de ma�as
     a serem compradas e calcular e exibir o pre�o a ser pago com duas casas decimais.
      O pre�o de cada ma�a � proporcional a quantidade comprada: menos de 10 ma�as R$ 1,00 cada;
       entre 10 e 24 ma�as R$ 0,80 cada; entre 25 e 49 ma�as R$ 0,60 cada; 50 ma�as ou acima R$ 0,50 cada.
        O programa dever� exibir uma mensagem de erro caso a quantidade de ma�as seja negativa ou zero.

    b) Na segunda op��o, o programa deve receber um caracter e informar se ele � uma vogal ou n�o.
     O sistema dever� considerar letras mai�sculas e min�sculas

Regras:
* Seu programa deve fazer a sele��o da op��o de entrada usando a estrutura de sele��o switch
 aceitando mai�sculas e minusculas.
* O menu deve tratar o caso do usu�rio digitar uma op��o inv�lida.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    //exibir na tela menu, com o pre�o da ma�� e com verifica vogal e pedir um entrada para o usu�rio.
    printf("a) Pre�o da ma��.\nb) Verifica vogal.\n\nDigite a op��o desejada:");
    //ler entrada do usu�rio e salvar em uma vari�vel.
    char opcao;
    scanf("%c",&opcao);
    setbuf(stdin,NULL);//limpar o buffer do teclado, por precau��o

    //verificar op��o selenionada, e exibir na tela o resultado da mesma.
    switch (opcao) {
      case 'a'://caso A
      case 'A'://ou caso a
            //pedir uma entrada, "Digite a quantidade de ma��s que deseja:"
            printf("Digite a quantidades de ma��s que deseja:");
            //ler entrada do usu�rio, e salvar em uma vari�vel.
            float numero_de_macas = 0;
            setbuf(stdin,NULL);//limpar o buffer do teclado
            scanf("%f",&numero_de_macas);

            //criar todas as condi��es do enunciado, e verificar em qual condi��o a variavel que recebeu
            //a entrada do usu�rio se encaixa

            //se numero de ma��s for menor que 1
            if(numero_de_macas<1){
              //se condi��o for verdadeira, mostrar mensagem de erro na tela
              printf("\nEssa quantidade � invalida. Reinicie o programa.\n\n");
            }//if < 1
            //se n�mero de ma��s for maior que 0 e menor que 10
            if(numero_de_macas>0 && numero_de_macas<10){
              //se condi��o for verdadeira, multiplicar n�mero de ma��s por pre�o (R$=1)
              //e exibir na tela
              printf("\nO pre�o a ser pago �:R$ %.2f.\n\n",numero_de_macas*1);
            }//if 0, 10
            //se n�mero de ma��s for maior ou igual a 10 e menor ou igual a 24
            if(numero_de_macas>=10 && numero_de_macas<= 24){
              //se condi��o for verdadeira, multiplicar n�mero de ma��s por pre�o (R$=0.80)
              //e exibir na tela
              printf("\nO pre�o a ser pago �:R$ %.2f.\n\n",numero_de_macas*0.80);
            }//if 10, 24
            //se n�mero de ma��s for maior ou igual a 25 e menor ou igual a 49
            if(numero_de_macas>=25 && numero_de_macas<=49){
              //se condi��o for verdadeira, multiplicar n�mero de ma��s por pre�o (R$=0.60)
              //e exibir na tela
              printf("\nO pre�o a ser pago �:R$ %.2f.\n\n",numero_de_macas*0.60);
            }//if 25, 49
            //se n�mero de ma��s for maior ou igual a 50
            if(numero_de_macas>=50){
              //se condi��o for verdadeira, multiplicar n�mero de ma��s por pre�o (R$=0.50)
              //e exibir na tela
              printf("\nO pre�o a ser pago �:R$ %.2f.\n\n",numero_de_macas*0.50);
            }//if50


      break;//case A

      case 'b':
      case 'B':
        //pedir, receber e salvar um caracter em uma vari�vel.
        printf("\nDigite um caracter:");
        char caracter;
        setbuf(stdin,NULL);//limpar o buffer do teclado
        scanf("%c",&caracter);
        //separar as vogais, maiusculos e minusculas por casos, e exibir o resultado de cada caso.
        switch (caracter) {
          case 'a':
          case 'A':
          case 'e':
          case 'E':
          case 'i':
          case 'I':
          case 'o':
          case 'O':
          case 'u':
          case 'U':
              //exibe que a letra � uma vogal
              printf("\nA letra informada � uma vogal.\n\n");
          break;//case vogais

          default://N�meros tambem caem nesse default, n�o tratei isso porque o enunciado n�o pediu.
              //exibe que a letra � uma consoante
              printf("\nA letra informada � uma consoante.\n\n");
        }//default switch caracter

      break;//case B

      default:
          //exibe mensagem de erro
          printf("\nA op��o digitada � invalida. Reinicie o programa\n\n");//reiniciar por que tenho que exibir o menu uma vez s�.
    }//default switch menu




    return 0;
}//main
