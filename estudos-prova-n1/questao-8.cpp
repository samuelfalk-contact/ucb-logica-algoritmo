#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int fila, idade, pessoasaprov = 0, pessoasrecu = 0, filacompra = 0, ingresso, contador = 0;
	float porcentagem;
	printf ("Quantas pessoas tem na fila?");
	scanf ("%d", &fila);
	
	for (int i=1; i<=fila; i++) {
		printf ("Digite a idade da pessoa %d e se tem ingresso\n1-Sim\n0-Nao:\n", i);
		scanf ("%d %d", &idade, &ingresso);
		if (idade<18) {
			pessoasrecu++;
		}
		else if (idade>=18 && ingresso == 1) {
			pessoasaprov++;
		}
		else if (idade>=18 && ingresso == 0) {
			filacompra++;
		}
		contador++;
	}
	porcentagem = (float)(pessoasaprov*100)/fila;
	printf ("Quantidade total de pessoas na fila:%d\n", contador);
	printf ("Entraram:%d\n", pessoasaprov);
	printf ("Fila de compra:%d\n", filacompra);
	printf ("Recusadas:%d\n", pessoasrecu);
	printf ("Porcentagem de pessoas que conseguiram entrar direto:%.2f\n", porcentagem);
	
	
	
	
	
	return 0;
}
