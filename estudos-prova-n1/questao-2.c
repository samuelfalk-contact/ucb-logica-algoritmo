#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int opcoes;
	printf ("Digite um numero inteiro de apenas um digito para ve-lo escrito por extenso:\n");
	scanf ("%d", &opcoes);
	
	if (opcoes>=0 && opcoes<=9) {
		switch (opcoes) {
			case 0:
				printf ("Zero");
				break;
			case 1:
				printf ("Um");
				break;
			case 2:
				printf ("Dois");
				break;
			case 3: 
				printf ("Tres");
				break;
			case 4: 
				printf ("Quatro");
				break;
			case 5: 
				printf ("Cinco");
				break;
			case 6: 
				printf ("Seis");
				break;
			case 7: 
				printf ("Sete");
				break;
			case 8: 
				printf ("Oito");
				break;
			case 9: 
				printf ("Nove");
				break;
		}
	}
	else {
			printf ("Numero invalido, digite um numero de 0 a 9");
		}
	
	
	return 0;
}
