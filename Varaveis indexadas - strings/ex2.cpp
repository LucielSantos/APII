#include<conio.h>
#include<stdio.h>
#include<string.h>

main(){
	char palavra1[47], palavra2[47];
	int resp;
	
	printf("\n  Insira o numero de pares de palavras: ");
	scanf("%d", &resp);
	
	for(int i = 0; i < resp; i++){
		printf("\n insira a primeira palavra: ");
		scanf("%s", palavra1);
		
		printf("\n insira a segunda palavra: ");
		scanf("%s", palavra2);
		
		if(strcmp(palavra1, palavra2) == 0){
			printf("\n IGUAIS");
		}
		else{
			printf("\n DIFERENTES");
		}
		
		printf("\n-------------------------------");
	}
	
	printf("\n fim fo programa!");
}

