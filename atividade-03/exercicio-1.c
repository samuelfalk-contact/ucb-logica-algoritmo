#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
	int numero1, numero2, soma, subtracao, multiplicacao, divisao, resto;
	printf ("Escreva 2 numeros inteiros: \n");
	scanf ("%d", &numero1);
	scanf ("%d", &numero2);
	
	soma = (numero1 + numero2);
	subtracao = (numero1 - numero2);
	multiplicacao = (numero1 * numero2);
	divisao = (numero1/numero2);
	resto = (numero1%numero2);
	
	printf ("Valor da soma: %d\n", soma);
	printf ("Valor da subtracao: %d\n", subtracao);
	printf ("Valor da multiplicacao: %d\n", multiplicacao);
	printf ("Valor da divisao: %d\n", divisao);
	printf ("O resto: %d\n", resto);
	// (Apenas pra explicação própria) o resto funciona como se fosse o seguinte exemplo: Se voce tem 10 maçãs e quer distribuir para 3 pessoas igualmente, como aqui é número inteiro então ficaria 3 pra cada e 1 ficaria pra ti, caso fosse número igualmente mas com número flutuante aí teria como distribuir sem o resto, mas não é o caso desse exercício
 return 0;
}
