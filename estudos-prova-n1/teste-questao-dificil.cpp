#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int quantpeca, codigodef, pecaprov = 0, pecrej = 0;
	float taxaaprov = 0.0, dimensao;
	printf ("Digite a quantidade de pecas: ");
	scanf ("%d", &quantpeca);
	
	for (int i = 1; i<=quantpeca; i++) {
		printf ("Digite a dimensao da peca %d:\n", i);
		scanf ("%f", &dimensao);
		printf ("Digite o codigo:\n0-Sem defeito visual\n1-Defeito superficial\n2-Defeito grave\n");
		scanf ("%d", &codigodef);
		if (codigodef <0 || codigodef>2) {
			printf ("Codigo invalido\n");
		}
		if ((dimensao>=49.00 && dimensao<=51.00) && codigodef == 0) {
			pecaprov++;
		}
		else if (dimensao<49.00 || dimensao>51.00) {
			pecrej++;
		}
		if ((dimensao>=49.00 && dimensao<=51.00) && codigodef > 0) {
			pecrej++;
		}
	}
	taxaaprov = (float) (pecaprov*100)/quantpeca;
	printf ("---------------------\n");
	printf ("---------------------\n\n");
	printf ("RELATORIO FINAL DE QUALIDADE\n\n");
	printf ("---------------------\n");
	printf ("---------------------\n\n");
	printf ("Total de pecas: %d\n", quantpeca);
	printf ("Pecas aprovadas: %d\n", pecaprov);
	printf ("Pecas rejeitadas: %d\n", pecrej);
	printf ("Taxa de aprovacao: %.2f\n", taxaaprov);
	if (taxaaprov>=80.00) {
		printf ("PARECER FINAL: LOTE APROVADO\n");
	}
	else {
		printf ("PARECER FINAL: LOTE REJEITADO\n");
	}
	
	
	
	
	
	return 0;
}
