/*Escreva um trecho de código para fazer a criação dos novos tipos de dados
conforme solicitado abaixo:• Horário: composto de hora, minutos e segundos.•
Data: composto de dia, mês e ano.• Compromisso: local, horário e texto que descreve o compromisso.*/

//sem bibliotecas, porque não usei nenhuma :p

typedef struct{
  int hora;
  int minutos;
  int segundos;
}Horario;

typedef struct{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct{
  char local[20];
  Horario horario1;
  char agendatxt[50];
}Compromisso;

int main(){
  return 0;
}//main
