/*Elabora uma fun��o que receba duas strings como par�metros e verifique
se a segunda string est� dentro da primeira. Para isso, utilize apenas
aritm�tica de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
  setlocale(LC_ALL,"");

  char s1[50];
  char s2[10];

  printf("Digite a primeira String:");
  fgets(s1,50,stdin);
  s1[strcspn(s1, "\n")] = '\0';
  setbuf(stdin,NULL);

  printf("\nDigite a segunda String:");
  fgets(s2,10,stdin);
  s2[strcspn(s2, "\n")] = '\0';
  setbuf(stdin,NULL);


  for(int i = 0; i<50; i++){
    *(s1+i) = toupper(*(s1+i));
    if(i<10)
      *(s2+i) = toupper(*(s2+i));
  }//for(toupper)

  for(int i = 0; i<50; i++){
      if(*(s1+i)!='\0'){
        if(*(s1+i)==*(s2)){
          int c = 0;//countador que sabera o tamanho de s2
          for(int x = 0; x<10; x++){
            if(*(s2+x)!='\0'){
              c++;
              if(*(s1+i+x)==*(s2+x)){
                c--;
              }//if(compara todos os charss)
            }else{break;}//if(\0_interno)
          }//for(percorre e compara as strs)

        //printf("%d",c);
        if(c==0)
        printf("S2 � contida em S1.");
        }//if(procura_primeira_letra)
    }else{break;}//if(\0)
  }//for(analise)



  return 0;
}//main
