#include <stdio.h>
#include <string.h>
int main() {
 struct Aluno_ {
 int matricula;
 char nome[30];
 float notas[3];
 };

 typedef struct Aluno_ Aluno; //apelida o  struct Aluno_ para Aluno

 Aluno aluno;
 strcpy(aluno.nome, "Joao");
 aluno.matricula = 100;
 aluno.notas[0] = 8.3;
 aluno.notas[1] = 7.0;
 aluno.notas[2] = 9.5; 
 printf("%s:%d \n %.2f, %.2f, %.2f\n", aluno.nome, aluno.matricula, 
aluno.notas[0], aluno.notas[1], aluno.notas[2]);
}
