#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int opcoes, contador = 0;
	float numero1, numero2, soma, sub, multi, div;
	
	do {
		printf ("Escolha a opcao:\n 1-Soma\n 2-Subtracao\n 3-Multiplicacao\n 4-Divisao\n 5-Sair\n");
		scanf ("%d", &opcoes);
		if (opcoes == 5) {
			continue;
		}
		printf ("Digite 2 numeros: ");
		scanf ("%f %f", &numero1, &numero2);
		switch (opcoes) {
			case 1:
				printf ("Soma\n");
				soma = numero1+numero2;
				printf ("A soma dos 2 numeros e:%.2f\n", soma);
				break;
			case 2:
				printf ("Subtracao\n");
				sub = numero1-numero2;
				printf ("A subtracao dos 2 numeros e:%.2f\n", sub);
				break;
			case 3:
				printf ("Multiplicacao\n");
				multi = numero1*numero2;
				printf ("A multiplicacao dos 2 numeros e:%.2f\n", multi);
				break;
			case 4:
				printf ("Divisao\n");
				div = numero1/numero2;
				printf ("A divisao dos 2 numeros e:%.2f\n", div);
				break;
		}
		contador++;
	} while (opcoes != 5);
	
	printf ("Quantas operacoes foram feitas:%d\n", contador);
	printf ("Saindo...\n");
	
	
	
	return 0;
}
