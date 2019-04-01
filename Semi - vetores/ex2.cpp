#include<conio.h>
#include<stdio.h>

main(){
	int vetor[20],resp, qtdPares;
	
	for(int i = 0; i < 20; i++){
		printf("\n Insira o valor do vetor[%d]: ", i);
		scanf("%d", &resp);
		
		vetor[i] = resp;
		
		if(vetor[i] % 2 == 0){
			qtdPares++;
		}
	}
	
	for(int i = 0; i < 20; i++){
		if(i == 0){
			printf("\n Vetor: ");
		}
		
		printf("%d", vetor[i]);
		
		if(i < 19){
			printf(" | ");
		}
	}
	
	printf("\n Números pares no vetor: %d", qtdPares);	
}

