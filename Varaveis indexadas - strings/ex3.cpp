#include<conio.h>
#include<stdio.h>
#include<string.h>

main(){
	char palavraNormal[47], palavraInvertida[47];
	int tam;
	int cont = 0;
	
	printf("\n insira a palavra normal: ");
	scanf("%s", palavraNormal);
	
	tam = strlen(palavraNormal);
	
	for(int i = tam; i >= 0; i--){
		palavraInvertida[cont] = palavraNormal[i-1];
		cont++;
	}
	
	printf("\n Palavra invertida: %s", palavraInvertida);
}

