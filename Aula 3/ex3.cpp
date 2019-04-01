#include<conio.h>
#include<stdio.h>

main(){
	int vetor[30], resp;
	
	for(int i = 0; i < 30; i++){
		printf("\n vetor [%d]: ", i);
		scanf("%d", &resp);
		vetor[i] = resp;
		
		
		
	}
	
	printf("\n Numeros positivos");
	
	for(int i = 0; i < 30; i++){
		if(vetor[i] > 0){
			printf("\n %d", vetor[i]);
		}
	}

}

