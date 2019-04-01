#include<conio.h>
#include<stdio.h>

main(){
	int vetor[10], resp, contador, soma;
	
	soma = 0;
	
	printf("\n %d", soma);
	
	for(int i = 0; i < 10; i++){
		printf("\n insira o valor do vetor[%d]: ", i);
		scanf("%d", &resp);
		
		if(resp > 0){
			vetor[i] = resp;
			contador++;
		}else{
			break;
		}
	}
	
	for(int i = 0; i < contador; i++){
		if(vetor[i] > 10){
			soma += vetor[i];
		}
	}
	
	printf("\n Soma dos valores maiores que zero: %d", soma);
}
