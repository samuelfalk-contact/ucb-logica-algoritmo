#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main () {
	int numero1, numero2, igualdade, diferenca, maiorque, menorque, maiorigual, menorigual;
	printf ("Digite 2 numeros inteiros:\n");
	scanf ("%d", &numero1);
	scanf ("%d", &numero2);
	
	igualdade = (numero1 == numero2);
	diferenca = (numero1 != numero2);
	maiorque = (numero1 > numero2);
	menorque = (numero1 < numero2);
	maiorigual = (numero1 >= numero2);
	menorigual = (numero1 <= numero2);
	
	printf ("Os 2 numero sao iguais?:%d\n", igualdade);
	printf ("Os 2 numero sao diferentes?:%d\n", diferenca);
	printf ("O primerio numero e maior que o segundo?:%d\n", maiorque);
	printf ("O primeiro numero e menor que o segundo?:%d\n", menorque);
	printf ("O primeiro numero e maior ou igual ao segundo?:%d\n", maiorigual);
	printf ("Os primeiro numero e menor ou igual ao segundo?:%d\n\n", menorigual);
	
	printf ("Lembrando que o numero 0 significa falso e 1 significa verdadeiro\n");
	
	return 0;
}
