#include<conio.h>
#include<stdio.h>

main(){
	int vetorA[10], vetorB[10], vetorMultiplicado[10], resp;
	
	for(int i = 0; i < 10; i++){
		printf("\n insira o valor do vetorA[%d]: ", i);
		scanf("%d", &resp);
		vetorA[i] = resp;
	}
	
		printf("\n SEGUNDO VETOR \n");
		
		for(int i = 0; i < 10; i++){
		printf("\n insira o valor do vetorB[%d]: ", i);
		scanf("%d", &resp);
		vetorB[i] = resp;
	}
	
	for(int i = 0; i < 10; i++){
		vetorMultiplicado[i] = vetorA[i] * vetorB[i];
	}
	
	for(int i = 0; i < 10; i++){
		printf("\n Vetor Multiplicado [%d]: %d", i, vetorMultiplicado[i]);
	}
}

