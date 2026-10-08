#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	float saldo = 1000, saque, deposito, sair;
	int opcao;
	printf ("Digite qual opcao quer, 1-saldo 2-saque 3-deposito 4-sair:\n");
	scanf ("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf ("Esse e seu saldo:%.2f\n", saldo);
			break;
		case 2:
			printf("Digite o valor do saque:\n");
			scanf("%f", &saque);
			saldo -= saque;
			printf ("Aqui esta seu novo saldo:%.2f\n", saldo);
			break;
		case 3:
			printf ("Digite o valor do deposito:");
			scanf ("%f", &deposito);
			saldo += deposito;
			printf ("Aqui esta seu novo saldo:%.2f\n", saldo);
			break;
		case 4:
			printf ("Saindo");
			break;
		default:
			printf ("Opcao nao existente");
			break;
			
	}
	
	return 0;
}
