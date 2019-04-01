#include<conio.h>
#include<stdio.h>

main(){
	int vetor[20], contador, resp;
	
	for(int i = 0; i < 20; i++){
		printf("\n vetor [%d]: ", i);
		scanf("%d", &resp);
		vetor[i] = resp;
		
		if(vetor[i] % 2 == 0){
			contador++;
		}		
	}	
	
	printf("\n %d numeros sao par", contador);
	
}

