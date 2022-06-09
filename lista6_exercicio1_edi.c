/* Exercicio da Lista 1 - Numero 2.
===========================================================================*/

#include <stdio.h>
#include <string.h>

char nome[30];
char *pointer;

void recChar(int length, int n) {
	if(length < n ) {
		if(length%2==0){
			printf("%c", *(pointer+length));
		}
		
		length++;
		recChar(length, n);
	}
}

int main() {
	int length, TAM;
	
	pointer = &nome[0];
	
	printf("\nDigite um nome:");
	fgets(nome, 30, stdin);
	
	length = 0;
	TAM = strlen(nome);
	
	recChar(length, TAM);
	
	return 0;
}

