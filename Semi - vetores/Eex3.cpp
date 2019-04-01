#include<conio.h>
#include<stdio.h>

main(){
	int vetor[30], resp;
	
	bool verif = false;
	
	for(int i = 0; i < 30; i++){
		printf("\n Insira o valor do vetor[%d]: ", i);
		scanf("%d", &resp);
		
		vetor[i] = resp;
	}
	
	for(int i = 0; i < 30; i++){
		if(vetor[i] > 0){
			
			if(!verif){
				verif = true;
				printf("\n Numeros positivos do vetor: ");
			}
			
			if(i < 30
			 && i > 0) {
				printf(" | ");	
			}
			
			printf("%d", vetor[i]);			
		}
	}
	
	if(!verif){
		printf("\n Vetor não possui numeros positivos");
	}
}

