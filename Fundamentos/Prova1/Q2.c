/*(Valor: 10 pontos) Faça um algoritmo textual e implemente um código que:

Suponha que em uma realidade alternativa, uma entidade poderosa está fazendo mal uso de seus poderes.
 Com um simples estalar de dedos, ele pode eliminar metade dos indivíduos de seu universo. No segundo estalar,
  ele elimina metade dos indivíduos restantes e assim em diante. Considere que o malfeitor gostaria de poupar
no máximo 500 indivíduos e, sabendo que ele consegue estalar os dedo 1 vez a cada 5 segundos.

Faça um algoritmo que permita a entidade poderosa informar a quantidade de habitantes do universo e calcule
 quantas quantas horas, minutos e segundos, no mínimo, ele levaria para atingir a sua meta.

Obs.: Considere que os estalos serão constantes e que a população do universo nunca aumentará.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    //Peça o número de habitantes para a entidade poderosa, com educação para ser um dos 500 restantes:
    printf("Ó grande entidade, qual o número de habitantes de vosso universo?:");
    //receber o valor, e salvar em uma variável.
    int habitantes = 0;
    scanf("%d",&habitantes);

    //iniciar um laço, onde o número de habitantes será dividido por 2, um contador de segundos recebera seu valor anterior + 5,
    //até que o número de habitantes seja menor ou igual a 500.
    int contador_segundos = 0;
    while(habitantes>500){
        habitantes = (habitantes/2);
        contador_segundos+=5;
    }//while

    //achar os valores de tempo com as seguintes fórmulas:
    //segundos = contador de segundos%60, minutos = (contador_segundos/60)%60, horas = (contador_segundos/60)/60
    int segundos = contador_segundos%60;//pega somente os segundos restantes, que não formam 1 minuto
    int horas = (contador_segundos/60)/60;//int só pega a parte inteira da divisão
    int minutos = (contador_segundos/60)%60;//pega somente os minutos restantes, que não formam 1 hora

    // exibir na tela, com a indentação de horário, os resultados: horas:minutos:segundos
    printf("\n\nVossa soberania levaria %d:%d:%d para dizimar o universo segundo tua grandiosa vontade.\n\n\n",horas,minutos,segundos);

    return 0;
}//main
