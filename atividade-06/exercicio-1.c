#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	float nota[8], media, soma = 0, maior, menor;
	int i, j, mediaacima = 0, mediaabaixo = 0;
	
	for (i = 0; i<8; i++) {
		printf ("Digite a nota do aluno %d: ", i + 1);
		scanf ("%f", &nota[i]);
		
		if (i==0) {
			maior = nota[i];
			menor = nota[i];
		}
			
		if (nota[i]>maior) {
			maior = nota[i];
		}
		if (nota[i]<menor) {
			menor = nota[i];
		}
		soma += nota[i];
	}
	media = soma/8;
	
	for (j = 0; j<8; j++) {
		if (nota [j] > media) {
			mediaacima++;
		}
		if (nota [j] < media) {
			mediaabaixo++;
		}
	}
	
	printf ("Media da turma: %.2f\n", media);
	printf ("Alunos abaixo da media: %d\n", mediaabaixo);
	printf ("Alunos acima da media: %d\n", mediaacima);
	printf ("Maior nota: %.2f\n", maior);
	printf ("Menor nota: %.2f\n", menor);
	
	
	
	
	
	return 0;
}
