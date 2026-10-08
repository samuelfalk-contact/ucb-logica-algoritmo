#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int contador1 = 0, contador2 = 0;
	
	for (int num = 1; num<=200; num++) {
		if (num % 5 == 0) {
			contador1++;
			
		}
		if (num % 5 == 0 && num % 10 == 0) {
			contador2++;
		}
	}
	printf ("Os numeros multiplos por 5:%d\n", contador1);
	printf ("Os numeros multiplos por 5 e por 10:%d\n", contador2);
	
	
	
	return 0;
}
