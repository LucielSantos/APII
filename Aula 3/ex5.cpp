#include<conio.h>
#include<stdio.h>

main(){
	int vetor[10], soma, resp;
	
	for (int i = 0; i < 10; i++){
		printf("\n vetor[%d]: ", i);
		scanf("%d", &resp);
		
		if(resp <= 0){
			break;
		}
		
		vetor[i] = resp;
		
		if(vetor[i] >10){
			soma += vetor[i];
		}		
	}
	
	printf("\n Soma dos valores do vetor que sao maiores que 10: %d", soma);
}

