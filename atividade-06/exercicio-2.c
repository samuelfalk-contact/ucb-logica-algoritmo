#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main () {
	float vendas[12], mesmaior, mesmenor, media, soma = 0;
	int i, j, mediaacima = 0, mediaabaixo = 0;	
	
	for (i=0; i<12; i++) {
		printf ("Quantas vendas foram feitas no mes %d: ", i +1);
		scanf ("%f", &vendas[i]);
		
		if (i==0) {
			mesmaior = vendas[i];
			mesmenor = vendas[i];
		}
		if (vendas[i]>mesmaior) {
			mesmaior = vendas[i];
		}
		if (vendas[i]<mesmenor) {
			mesmenor = vendas[i];
		}
		
		soma += vendas[i];
		
	}
	media = soma/12;
	for (j=0; j<12; j++) {
		if (vendas[j]>media) {
			mediaacima++;
		}
		if (vendas[j]<media) {
			mediaabaixo++;
		}
	}
	
	printf ("Total de vendas no ano: %.2f\n", soma);
	printf ("Mes de maior venda: %.2f\n", mesmaior);
	printf ("Mes de menor venda: %.2f\n", mesmenor);
	printf ("Media mensal: %.2f\n", media);
	printf ("Quantos meses acima da media: %d\n", mediaacima);
	printf ("Quantos meses abaixo da media: %d\n", mediaabaixo);
	
	
	return 0;
}
