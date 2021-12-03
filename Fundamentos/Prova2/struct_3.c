/*Construa uma estrutura aluno com nome, curso e 4 notas, média e situação.
Leia as informações nome, curso e notas do teclado, calcule a média e armazene a situação do aluno:

media ≥ 7 → Aprovado;
3 ≤ media < 7 → Exame;
media < 3 → Reprovado;*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
  char nometxt[20];
  char cursotxt[20];
  float nota1,nota2,nota3,nota4;
  float media;
  char situacaotxt[15];
}Aluno;

int main(){
  setlocale(LC_ALL,"");

  Aluno aluno1;
  printf("Digite o nome do aluno:");
  scanf("%s",aluno1.nometxt);
  setbuf(stdin,NULL);

  printf("Digite a nota1 para %s",aluno1.nometxt);
  scanf("%f",&aluno1.nota1);
  setbuf(stdin,NULL);

  printf("Digite a nota2 para %s",aluno1.nometxt);
  scanf("%f",&aluno1.nota2);
  setbuf(stdin,NULL);

  printf("Digite a nota3 para %s",aluno1.nometxt);
  scanf("%f",&aluno1.nota3);
  setbuf(stdin,NULL);

  printf("Digite a nota4 para %s",aluno1.nometxt);
  scanf("%f",&aluno1.nota4);
  setbuf(stdin,NULL);

  aluno1.media = (aluno1.nota1+aluno1.nota2+aluno1.nota3+aluno1.nota4)/4;

  /*media ≥ 7 → Aprovado;
  3 ≤ media < 7 → Exame;
  media < 3 → Reprovado;*/

  if(aluno1.media >= 7){
    strcpy(aluno1.situacaotxt,"Aprovado");
  }else if(aluno1.media >= 3){
    strcpy(aluno1.situacaotxt,"Exame");
  }else{
    strcpy(aluno1.situacaotxt,"Reprovado");
  }//else

  //printf("\n\nmedia = %f\n nome = %s\n situção = %s\n",aluno1.media,aluno1.nometxt,aluno1.situacaotxt);

  return 0;
}//main
