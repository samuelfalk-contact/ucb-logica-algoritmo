#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int ano;
	printf ("Digite um ano:\n");
	scanf ("%d", &ano);
	
	if (ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0)
		printf ("%d e bissexto\n", ano);
	else
		printf ("%d nao e bissexto\n", ano);
	
	
	
	
	
	return 0;
}
