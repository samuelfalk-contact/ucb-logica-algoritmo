#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int alunos, minimo = 1;
	float media, notaaluno, soma = 0.0;
	printf ("Quantos alunos tem na turma:\n");
	scanf ("%d", &alunos);
		
	while (minimo <= alunos) {
		printf ("Digite a nota do aluno %d:\n", minimo);
		scanf ("%f", &notaaluno);
		
			if (notaaluno < 0 || notaaluno > 10) {
				printf ("Nota invalida\n");
				continue;
			}	
		soma += notaaluno;
		minimo++;
	}
	media = soma/alunos;
	printf ("Aqui esta a media da turma:%.2f\n", media);


	
	
	
	
	
	
	return 0;
}
