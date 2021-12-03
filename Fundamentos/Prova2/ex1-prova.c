#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main(){
  setlocale(LC_ALL,"");

  int matriz_pessoas[4][5];
  int pessoas = -1;//pessoas é igual a -1, para entrar no loop do while, explicado a seguir.
  int total_de_pessoas = 0;
  int total_pessoas_linha_2 = 0;

  //faz o preenchimento da matriz de pessoas com 2 for's aninhados
  //while faz o tratamento de números negativos, o ciclo não acaba até que seja digitado um valor positivo

  for(int linhas = 0; linhas<4; linhas++){
    for(int colunas = 0; colunas<5; colunas++){

      while(pessoas<0){

        printf("Linha %i, coluna %i. Pessoas:",linhas,colunas);
        scanf("%d",&pessoas);
        matriz_pessoas[linhas][colunas] = pessoas;

        //faz o somatorio das pessoas já nessa etapa, poupando processamento. E salva numa variavel Total_de_pessoas
        //apenas se pessoas for positivo ou = a 0
        if(pessoas>-1){
          total_de_pessoas+=pessoas;
          if(linhas == 1){//linha = 1 é o mesmo que a segunda linha, já que a primeira é linha[0]
            //faz o somatorio de todas as pessoas da linha 2, somente se o valor for positivo
            //aproveitando o if anterior e poupando processamento.
            total_pessoas_linha_2+=pessoas;
          }//if_2
        }//if_1


      }//while
    pessoas = -1;//para entrar no while seguinte
    }//for_2 preenchimento da matriz
  }//for_1 preenchimento da matriz

  int soma_colunas[5] = {0,0,0,0,0};//variavel que posteeriormente recebera os valores somados de cada coluna
  //for's aninhados que percorrem a matriz de coluna em coluna
  for(int colunas = 0; colunas<5; colunas++){
    for(int linhas = 0; linhas<4; linhas++){
      //o vetor soma_colunas recebe a possição de memoria respectiva ao valor da coluna, a soma dos numeros daquela coluna.
      soma_colunas[colunas]+=matriz_pessoas[linhas][colunas];
    }//for_2 analise da matriz
  }//for_1 analise da matriz


  int menor_valor_colunas =soma_colunas[0];
  int numero_coluna = 0;
  for(int i =0; i<5; i++){
    //se a soma de uma coluna for menor que o ultimo menor valor salvo, então o menor valor
    //passa a ser o valor da soma da coluna
    if(soma_colunas[i]<menor_valor_colunas){
      menor_valor_colunas=soma_colunas[i];
      //numero_coluna recebe a posição da coluna com aquele valor total
      numero_coluna = i;
    }//if analise menor valor por colunas
  }//for analise menor valor por colunas


  //calcula a qunatidade minima de caixas que os agentes devem levar para vacinar todas as pessoas
  // total de pessoas dividido por 50(5doses*10ampolas)
  int caixas_minimas = total_de_pessoas/50;
  //se o resto for diferente de 0, precisará de mais uma caixa para vacinar todas as pessoas
  if ((total_de_pessoas%50)!=0)
    caixas_minimas+=1;
    //soma uma caixa , se o resto for diferente de 0


  //calcula a quantidade de ampolas minimas necessarias para a linha 2
  //total de pessoas da linha 2, dividido por 5 (quantidade de dose de cada ampola)
  int ampolas_minimas_L2 = total_pessoas_linha_2/5;
  //se o resto for diferente de 0, precisará de mais uma caixa para vacinar todas as pessoas
  if((total_pessoas_linha_2%5)!=0)
    ampolas_minimas_L2+=1;
    //soma uma ampola , se o resto for diferente de 0

  /*d) Qual coluna do mapa possui a menor quantidade de pessoas a serem vacinadas e
    quantas ampolas de vacina são necessárias para essa coluna.*/

    //variavel que recebe o valor minimo de ampolas para a coluna com menos pessoas
    // somatoria dos valores da coluna com menos pessoas dividido por 5(numero de dosses da ampola)
    int ampolas_minimas_C = menor_valor_colunas/5;
    if((menor_valor_colunas%5)!=0){
      ampolas_minimas_C+=1;
      //soma uma ampola , se o resto for diferente de 0
    }

  //exibe na tela todos os resultados finais
  printf("\n\nA coluna %i tem menor número de pessoas.",numero_coluna);
  printf("\nA coluna %i precisa de %i ampolas.",numero_coluna,ampolas_minimas_C);
  printf("\nTotal de caixas para todas as pessoas:%i",caixas_minimas);
  printf("\nTotal de ampolas para a linha 2:%i\n\n",ampolas_minimas_L2);


  return 0;
}//main
