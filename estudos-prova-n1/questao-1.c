#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int opcoes, idade;
	printf ("Digite seu sexo, sendo 1 - Masculino, 2 - Feminino\n");
	scanf ("%d", &opcoes);
	
	switch (opcoes) {
		case 1:
			printf ("Masculino\n");
			printf ("Digite sua idade:\n");
			scanf ("%d", &idade);
			if (idade<18) {
				printf ("Menor de idade\n");
			}
			else {
				printf ("Maior de idade");
			}
			break;
		case 2:
			printf ("Feminino\n");
			printf ("Digite sua idade:\n");
			scanf ("%d", &idade);
			if (idade<18) {
				printf ("Menor de idade\n");
			}
			else {
				printf ("Maior de idade");
			}
			break;
	}
	
	return 0;
}
