/*(Valor: 10 pontos) Fa�a um algoritmo textual e implemente um c�digo que:

Suponha que em uma realidade alternativa, uma entidade poderosa est� fazendo mal uso de seus poderes.
 Com um simples estalar de dedos, ele pode eliminar metade dos indiv�duos de seu universo. No segundo estalar,
  ele elimina metade dos indiv�duos restantes e assim em diante. Considere que o malfeitor gostaria de poupar
no m�ximo 500 indiv�duos e, sabendo que ele consegue estalar os dedo 1 vez a cada 5 segundos.

Fa�a um algoritmo que permita a entidade poderosa informar a quantidade de habitantes do universo e calcule
 quantas quantas horas, minutos e segundos, no m�nimo, ele levaria para atingir a sua meta.

Obs.: Considere que os estalos ser�o constantes e que a popula��o do universo nunca aumentar�.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    //Pe�a o n�mero de habitantes para a entidade poderosa, com educa��o para ser um dos 500 restantes:
    printf("� grande entidade, qual o n�mero de habitantes de vosso universo?:");
    //receber o valor, e salvar em uma vari�vel.
    int habitantes = 0;
    scanf("%d",&habitantes);

    //iniciar um la�o, onde o n�mero de habitantes ser� dividido por 2, um contador de segundos recebera seu valor anterior + 5,
    //at� que o n�mero de habitantes seja menor ou igual a 500.
    int contador_segundos = 0;
    while(habitantes>500){
        habitantes = (habitantes/2);
        contador_segundos+=5;
    }//while

    //achar os valores de tempo com as seguintes f�rmulas:
    //segundos = contador de segundos%60, minutos = (contador_segundos/60)%60, horas = (contador_segundos/60)/60
    int segundos = contador_segundos%60;//pega somente os segundos restantes, que n�o formam 1 minuto
    int horas = (contador_segundos/60)/60;//int s� pega a parte inteira da divis�o
    int minutos = (contador_segundos/60)%60;//pega somente os minutos restantes, que n�o formam 1 hora

    // exibir na tela, com a indenta��o de hor�rio, os resultados: horas:minutos:segundos
    printf("\n\nVossa soberania levaria %d:%d:%d para dizimar o universo segundo tua grandiosa vontade.\n\n\n",horas,minutos,segundos);

    return 0;
}//main
