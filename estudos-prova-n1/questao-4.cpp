#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int senha = 123, tentativa, contador = 0, restam;
	do {
		printf ("Digite a senha:");
		scanf ("%d", &tentativa);
		contador++;
		restam = 3-contador;
		if (tentativa != senha) {
			for (int i = restam; i>= 1; i--) {
				printf ("%d...\n", i);
			
			}
		}
		
		
		} while (tentativa != senha && contador<3);
	
	if (tentativa == senha) {
		printf ("Senha correta");
	}
	else {
		printf ("Limite de senha incorreta atingido");
	}
	
	
	return 0;
}
