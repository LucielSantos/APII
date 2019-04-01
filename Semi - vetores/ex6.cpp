#include<conio.h>
#include<stdio.h>

main(){
	int vetor[10], resp;
	bool verif = false;
	
	for(int i = 0; i < 10; i++){
		printf("\n Insira o valor do vetor[%d]: ", i);
		scanf("%d", &resp);
		
		vetor[i] = resp;
	}
	
	printf("\n insira o valor a ser procurado: ");
	scanf("%d", &resp);
	
	for(int i = 0; i < 10; i++){
		if (vetor[i] == resp){
			verif = true;
			printf(" %d |", vetor[i]);
		}
	}
	
	if(!verif){
		printf("Nao foram achados elementos iguas");
	}
}

