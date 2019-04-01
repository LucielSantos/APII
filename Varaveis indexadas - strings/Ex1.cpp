#include<conio.h>
#include<stdio.h>
#include<string.h>

main(){	
	char palavra[47];
	int tam;
	
	printf("\n insira a palavra: ");
	scanf("%s", palavra);
	
	printf("\n Primeira letra da palavra: %c", palavra[0]);
	
	tam = strlen(palavra);
	
	printf("\n Ultima letra da palavra: %c", palavra[tam-1]);
	
	printf("\n Numeros de caracteres: %d", tam);
}

