#include<conio.h>
#include<stdio.h>

main(){
	
	int vetorA[10], resp, cont;
	
	for(int i = 0; i < 10; i++){
		printf("\n insira o valor do vetorA[%d]: ", i);
		scanf("%d", &resp);
		vetorA[i] = resp;
	}
	 printf("\n insira o valor para passar os maiores para outro vetor: ");
	 scanf("%d", &resp);
	 
	 for(int i = 0; i < 10; i++){
		if(vetorA[i] > resp){
			cont++;
		}
	 }
	 
	 int vetorB[cont];
	 int posicao = 0;
	 
	 for(int i = 0; i < 10; i++){
		if(vetorA[i] > resp){
			vetorB[posicao] = vetorA[i];
			posicao++;
		}
	 }
	 
	 for(int i = 0; i < cont; i++){
	 	printf("\n vetorB[%d]: %d \n", i, vetorB[i]);
	 }
}

