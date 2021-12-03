/*(12 pontos) Utilizando repeti��o e estruturas, fa�a um programa que receba os dados de 5 pessoas.
Cada pessoa possui:

nome (m�ximo: 30 caracteres)
profiss�o (m�ximo: 20 caracteres)
sexo (letra m ou f)
ano de nascimento
 Em seguida, fa�a cada um dos itens abaixo:

a) Padronize os nomes colocando a primeira letra de cada palavra em mai�scula
   Ex.: "joao da silva" -> se trasforma em -> "Joao Da Silva"

b) Junte o texto "Vacinado" ou "Vacinada" ao nome de todas as pessoas acima de 60 anos.
Considere o sexo para juntar o texto correto.
   Ex.: "Antonia Pereira" -> se transforma em -> "Antonia Pereira Vacinada".

c) Exiba todos os dados em uma tabela com as colunas alinhadas (textos alinhados �
esquerda e n�meros � direita), exiba uma barra | para separar as colunas

d) Exiba o nome e a idade da pessoa mais velha. (Se houver empate exiba de todos com
a mesma idade mais alta)

Obs.:

Os itens devem ser executados sequencialmente
Fa�a a leitura inicial e cada item, de A a E, em uma fun��o separada.
� proibido o uso de vari�veis globais, passe valores utilizando par�metros quando
necess�rio.
B�nus do professor maluco: Escolha, obrigatoriamente, um dos itens de "b" a "e"
para ser eliminado da quest�o, indique o item descartado com um coment�rio em seu c�digo*/

//////////////////////////////////////
//////////ITEM "E" ELIMINADO//////////
//////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

typedef struct{
  char nome[30];
  char profissao[20];
  char sexo;
  int ano_de_nascimento;
}Pessoa;

void primeira_letra_maiuscula(Pessoa* pessoas){
  //faz a primeira letra ficar maiuscula
  //percorre a frase analisando espa�os em branco, se encontrar, a letra da frente tem q ser maiuscula
    for(int i =0; i<5; i++){
      pessoas->nome[0] = toupper(pessoas->nome[0]);
      for(int char_ = 0; char_<30; char_++){
      if(pessoas->nome[char_]==' '){
        pessoas->nome[char_+1] = toupper(pessoas->nome[char_+1]);
      }//if
    }//for_2
  }//for_1


}//void_primeira_letra_maiuscula

void chec_vacinacao(Pessoa* pessoas){

  //ano atual - ano de nascimento = idade, se idade for maior que 60
  //entra no if que verifica o sexo, se for F enta� "Vacinada", sen�o, "Vacinado"
  if((2021-pessoas->ano_de_nascimento)>60){
    if(toupper(pessoas->sexo)=='F'){
      strcat(pessoas->nome," Vacinada");
    }else{
      strcat(pessoas->nome," Vacinado");
    }//if_else_1

  }//if_>60
}//void_chec)vacina��o

void exibe_dados(Pessoa* pessoas){
 //-38 de indenta��o por causa do "Vacinado" que pode ou n�o ser incluido
 //exibe os dados
 printf("|Nome: %-38s|profiss�o: %-20s|Sexo: %c|Natalidade: %4i|\n",pessoas->nome,pessoas->profissao,pessoas->sexo,pessoas->ano_de_nascimento);
}//void_exibe_dados

void verifica_idade(Pessoa *pessoas){
  int ano = pessoas[0].ano_de_nascimento;
  // variavel ano recebe uma das idades da struct

  //estrutuca for que percorre todos os elementos do vetor pessoas
  for(int i =0; i<5; i++){
    //para cada elemento do vetor pessoas, se ano for maior que ano do elemento,
    //ent�o, ano recebe ano do elemento
    if(ano>pessoas[i].ano_de_nascimento){
      ano = pessoas[i].ano_de_nascimento;
    }//if
  }//for

  printf("\n\n");
  printf("O(s) mais velho(s):\n\n\n");
  //repete o for, agora com o ano mais antigo j� salvo na memoria
  for(int i =0; i<5; i++){
    //se ano, que contem o ano mais antigo for == a ano do elemento do vetor pessoas
    //ent�o printa nome e idade, isso tamb�m j� trata os empates
    if(ano==pessoas[i].ano_de_nascimento){
      printf("|Nome: %-38s|Idade %3i|\n",pessoas[i].nome,(2021-pessoas[i].ano_de_nascimento));
    }//if_2
  }//for_2
}//void_verifica_idade

int main(){
  setlocale(LC_ALL,"");
  Pessoa pessoas[5];

  //for para o preenchimento do vetor pessoas, e suas estruturas
  for(int i =0; i<5; i++){

    //essa parte do c�digo apenas preenche os membros das estruturas do vetor pessoas

    printf("Digite o nome para a %i� pessoa:",i+1);//i+1 para exibir de 1 a 5 e n�o de 0a4
    fgets(pessoas[i].nome,30,stdin);
    //retira o \n que a fun��o fgets deixa
    pessoas[i].nome[strcspn(pessoas[i].nome,"\n")] = '\0';
    setbuf(stdin,NULL);

    printf("Digite a profiss�o da %i� pessoa:",i+1);//i+1 para exibir de 1 a 5 e n�o de 0a4
    fgets(pessoas[i].profissao,20,stdin);
    //retira o \n que a fun��o fgets deixa
    pessoas[i].profissao[strcspn(pessoas[i].profissao,"\n")] = '\0';
    setbuf(stdin,NULL);

    printf("Digite o sexo da %i� pessoa:",i+1);//i+1 para exibir de 1 a 5 e n�o de 0a4
    scanf("%c",&pessoas[i].sexo);
    setbuf(stdin,NULL);

    printf("Digite o ano de nascimento da %i� pessoa:",i+1);
    scanf("%d",&pessoas[i].ano_de_nascimento);
    setbuf(stdin,NULL);

  }//for

  printf("\n\n\n");

  //for que passa para as fun��es a estrutura que ela deve manipular
  //desse modo uso 1 for para 3 fun��es e n�o o contrario, economizando processamento.
  for(int i =0; i<5; i++){
    primeira_letra_maiuscula(&pessoas[i]);
    chec_vacinacao(&pessoas[i]);
    exibe_dados(&pessoas[i]);
  }//for

  //essa fun��o precisa de 2 for's para ser executada
  //por isso n�o foi incluida no for de cima
  verifica_idade(&pessoas);

  printf("\n\n\n");

  return 0;
}//main
