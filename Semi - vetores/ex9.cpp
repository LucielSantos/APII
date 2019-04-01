#include<conio.h>
#include<stdio.h>

main(){
	int vetorA[10], vetorInvertido[10], resp;
	int cont = 0;
	
	for(int i = 0; i < 10; i++){
		printf("\n insira o valor do vetorA[%d]: ", i);
		scanf("%d", &resp);
		vetorA[i] = resp;
	}
	
	for(int i = 9; i >= 0; i--){
		vetorInvertido[cont] = vetorA[i];
		cont++;
	}
	
	printf("\n VETOR INVERTIDO:");

	
	for (int i = 0; i < 10; i++){
		printf("\n Vetor invertido [%d]: %d", i, vetorInvertido[i]);
	}
}

