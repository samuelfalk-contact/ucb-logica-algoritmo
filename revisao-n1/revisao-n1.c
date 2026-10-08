#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int quant_pec, cod_def, pec_aprov = 0, pec_reje = 0, min = 1;
	float dimensao, taxa_apro;
	printf ("Digite a quantidade de pecas:\n");
	scanf ("%d", &quant_pec);
	
	while (min <= quant_pec) {
		printf ("Digite a dimensao do produto %d:\n", min);
		scanf ("%f",  &dimensao);
		printf ("Digite o codigo do produto, sendo 0- sem defeito, 1- defeito superficial e 2- defeito grave:\n");
		scanf ("%d", &cod_def);
		
		
		if ((dimensao >= 49.00 && dimensao <= 51.00) && cod_def == 0) {
			pec_aprov++;
		}
		else {
			pec_reje++;
	}
		min++;
		taxa_apro = (float)(pec_aprov*100)/quant_pec;
	}
	
	if (taxa_apro>=80) {
		printf ("----------------------\n");
	printf ("----------------------\n\n");
	printf ("RELATORIO FINAL DE QUALIDADE\n\n");
	printf ("----------------------\n");
	printf ("----------------------\n\n");
	printf ("Total de pecas:%d\n", quant_pec);
	printf ("Pecas Aprovadas:%d\n", pec_aprov);
	printf ("Pecas Rejeitadas:%d\n", pec_reje);
	printf ("Taxa de aprovacao:%.2f%%\n", taxa_apro);
	printf ("PARECER FINAL: APROVADO");
	}
	else {
		printf ("----------------------\n");
	printf ("----------------------\n\n");
	printf ("RELATORIO FINAL DE QUALIDADE\n\n");
	printf ("----------------------\n");
	printf ("----------------------\n\n");
	printf ("Total de pecas:%d\n", quant_pec);
	printf ("Pecas Aprovadas:%d\n", pec_aprov);
	printf ("Pecas Rejeitadas:%d\n", pec_reje);
	printf ("Taxa de aprovacao:%.2f%%\n", taxa_apro);
	printf ("PARECER FINAL:REPROVADO");
	
	}
	
	
	
	
	
	return 0;
}
