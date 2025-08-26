#include <stdio.h>
#include <string.h>
int main() {
 typedef struct Aluno_ {
 int matricula;
 char nome[30];
 float notas[3];
 } Aluno;
 Aluno *aluno = (Aluno *) malloc(sizeof(Aluno));
 strcpy(aluno->nome, "Joao");
 aluno->matricula = 100;
 aluno->notas[0] = 8.3; aluno->notas[1] = 7.0;
 aluno->notas[2] = 9.5; aluno->notas[3] = 6.4;
 printf("%s:%d \n %.2f, %.2f, %.2f, %.2f\n", aluno->nome, aluno->matricula, 
aluno->notas[0], aluno->notas[1], aluno->notas[2], aluno->notas[3]);
}
// se aluno for um ponteiro, a unica coisa que muda é que ao inves de aluno.notas, é aluno->notas