#include<conio.h>
#include<stdio.h>

main(){
	int vetor[5], resp, menor;
	
	for(int i = 0; i < 5; i++){
		printf("\n Insira o valor do vetor[%d]: ", i);
		scanf("%d", &resp);
		
		vetor[i] = resp;
	}
	
	for(int i = 0; i < 5; i++){
		if(i == 0 || vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	printf("\n Menor elemento do vetor: %d", menor);
}

