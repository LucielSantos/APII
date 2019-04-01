#include<conio.h>
#include<stdio.h>

main(){
	int vetor [30], resp, verificador;
	
	for(int i = 0; i < 30; i++){
		
		printf("\n vetor [%d]: ", i);
		scanf("%d", &resp);
		
		vetor[i] = resp;
		
		if(i == 0){
			verificador = resp;
		}
		
		if(vetor[i] < verificador){
			verificador = vetor[i];
		}
	}
	
	printf("\n Menor numero: %d", verificador);
}

