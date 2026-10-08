#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int opcoes, arroz, feijao, oleo;
	float precoarroz = 0.0, precofeijao =0.0, precooleo = 0.0, soma;
	do{
		printf ("Digite a opcao de compra:\n1-Arroz\n2-Feijao\n3-Oleo\n0-Finalizar\n");
		scanf ("%d", &opcoes);
		if (opcoes == 0) {
			continue;
		}
	switch (opcoes) {
		case 1:
			printf ("Digite o preco do arroz e a quantidade:\n");
			scanf ("%f %d", &precoarroz, &arroz);
			precoarroz *= arroz;
			if (arroz>10) {
				 precoarroz -= (precoarroz*5)/100;
			}
			else {
			}
			break;
		case 2:
			printf ("Digite o preco do feijao e a quantidade:\n");
			scanf ("%f %d", &precofeijao, &feijao);
			precofeijao *= feijao;
			if (feijao>10) {
				 precofeijao -= (precofeijao*5)/100;
			}
			else {
			}
			break;
		case 3:
			printf ("Digite o preco do oleo e a quantidade:\n");
			scanf ("%f %d", &precooleo, &oleo);
			precooleo *= oleo;
			if (oleo>10) {
				 precooleo -= (precooleo*5)/100;
			}
			else {
			}
			break;
	}
	soma = precoarroz+precofeijao+precooleo;
} while (opcoes != 0);
	
	
	printf ("Valor total: %.2f", soma);
	
	return 0;
}
