/*(Valor: 10 pontos) Faça um algoritmo textual e implemente um código que:

Exiba, uma única vez, um menu com duas opções:

a) Preço da maçã
b) Verifica Vogal

E peça a opção desejada ao usuário

    a) Na primeira opção, o programa deve receber a quantidade de maças
     a serem compradas e calcular e exibir o preço a ser pago com duas casas decimais.
      O preço de cada maça é proporcional a quantidade comprada: menos de 10 maças R$ 1,00 cada;
       entre 10 e 24 maças R$ 0,80 cada; entre 25 e 49 maças R$ 0,60 cada; 50 maças ou acima R$ 0,50 cada.
        O programa deverá exibir uma mensagem de erro caso a quantidade de maças seja negativa ou zero.

    b) Na segunda opção, o programa deve receber um caracter e informar se ele é uma vogal ou não.
     O sistema deverá considerar letras maiúsculas e minúsculas

Regras:
* Seu programa deve fazer a seleção da opção de entrada usando a estrutura de seleção switch
 aceitando maiúsculas e minusculas.
* O menu deve tratar o caso do usuário digitar uma opção inválida.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    //exibir na tela menu, com o preço da maçã e com verifica vogal e pedir um entrada para o usuário.
    printf("a) Preço da maçã.\nb) Verifica vogal.\n\nDigite a opção desejada:");
    //ler entrada do usuário e salvar em uma variável.
    char opcao;
    scanf("%c",&opcao);
    setbuf(stdin,NULL);//limpar o buffer do teclado, por precaução

    //verificar opção selenionada, e exibir na tela o resultado da mesma.
    switch (opcao) {
      case 'a'://caso A
      case 'A'://ou caso a
            //pedir uma entrada, "Digite a quantidade de maçãs que deseja:"
            printf("Digite a quantidades de maçãs que deseja:");
            //ler entrada do usuário, e salvar em uma variável.
            float numero_de_macas = 0;
            setbuf(stdin,NULL);//limpar o buffer do teclado
            scanf("%f",&numero_de_macas);

            //criar todas as condições do enunciado, e verificar em qual condição a variavel que recebeu
            //a entrada do usuário se encaixa

            //se numero de maçãs for menor que 1
            if(numero_de_macas<1){
              //se condição for verdadeira, mostrar mensagem de erro na tela
              printf("\nEssa quantidade é invalida. Reinicie o programa.\n\n");
            }//if < 1
            //se número de maçãs for maior que 0 e menor que 10
            if(numero_de_macas>0 && numero_de_macas<10){
              //se condição for verdadeira, multiplicar número de maçãs por preço (R$=1)
              //e exibir na tela
              printf("\nO preço a ser pago é:R$ %.2f.\n\n",numero_de_macas*1);
            }//if 0, 10
            //se número de maçãs for maior ou igual a 10 e menor ou igual a 24
            if(numero_de_macas>=10 && numero_de_macas<= 24){
              //se condição for verdadeira, multiplicar número de maçãs por preço (R$=0.80)
              //e exibir na tela
              printf("\nO preço a ser pago é:R$ %.2f.\n\n",numero_de_macas*0.80);
            }//if 10, 24
            //se número de maçãs for maior ou igual a 25 e menor ou igual a 49
            if(numero_de_macas>=25 && numero_de_macas<=49){
              //se condição for verdadeira, multiplicar número de maçãs por preço (R$=0.60)
              //e exibir na tela
              printf("\nO preço a ser pago é:R$ %.2f.\n\n",numero_de_macas*0.60);
            }//if 25, 49
            //se número de maçãs for maior ou igual a 50
            if(numero_de_macas>=50){
              //se condição for verdadeira, multiplicar número de maçãs por preço (R$=0.50)
              //e exibir na tela
              printf("\nO preço a ser pago é:R$ %.2f.\n\n",numero_de_macas*0.50);
            }//if50


      break;//case A

      case 'b':
      case 'B':
        //pedir, receber e salvar um caracter em uma variável.
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
              //exibe que a letra é uma vogal
              printf("\nA letra informada é uma vogal.\n\n");
          break;//case vogais

          default://Números tambem caem nesse default, não tratei isso porque o enunciado não pediu.
              //exibe que a letra é uma consoante
              printf("\nA letra informada é uma consoante.\n\n");
        }//default switch caracter

      break;//case B

      default:
          //exibe mensagem de erro
          printf("\nA opção digitada é invalida. Reinicie o programa\n\n");//reiniciar por que tenho que exibir o menu uma vez só.
    }//default switch menu




    return 0;
}//main
