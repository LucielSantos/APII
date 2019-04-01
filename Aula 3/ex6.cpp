#include<conio.h>
#include<stdio.h>

main(){
	int vetor[10], resp, i;
	
	for(i = 0; i < 10; i++){
		printf("\n vetor[%d]: ", i);
		scanf("%d", &resp);
		
		vetor[i] = resp;
	}
	
	printf("\n insira o valor a ser procurado: ");
	scanf("%d", &resp);
	
	printf("\n numeros encontrados: ");
	
	for(i = 0; i < 10; i++){
		if(vetor[i] == resp){
			printf("\n %d", vetor[i]);
		}
	}
}

