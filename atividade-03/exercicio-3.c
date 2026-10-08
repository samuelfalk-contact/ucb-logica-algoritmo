#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	float nota, soma = 0.0, media;
	printf ("Digite as 4 notas da materia:\n ");
	scanf ("%f", &nota);
	soma += nota;
	scanf ("%f", &nota);
	soma += nota;
	scanf ("%f", &nota);
	soma += nota;
	scanf ("%f", &nota);
	soma += nota;
	media = soma/4;
	
	printf ("Aqui esta sua media: %.2f \n", media);
	
	
	return 0;
}
