#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	float media, nota1, nota2, nota3, notafinal;
	char conceito;
	printf ("Me informe as 3 notas:\n");
	scanf ("%f", &nota1);
	scanf ("%f", &nota2);
	scanf ("%f", &nota3);
	
	notafinal = nota1+nota2+nota3;
	media = notafinal/3;
	
	if (media >= 9.0)
		conceito = 'A';
	else if (media >= 7.5)// && media < 9.0
		conceito = 'B';
	else if (media >= 6.0)
		conceito = 'C';
	else if (media >= 4.0)
		conceito = 'D';
	else 
		conceito = 'E';
	
	printf ("Aqui esta sua media:%.2f\n", media);
	printf ("Aqui esta o conceito da sua nota:%c\n", conceito);
	return 0;
}
