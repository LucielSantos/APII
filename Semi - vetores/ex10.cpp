#include<conio.h>
#include<stdio.h>

main(){
	
	int vetorImpar[10], vetorPar[10], resp;
	int contImpar, contPar = 0
	;
	
	do{
		printf("\n Insira um numero: ");
		scanf("%d", &resp);	
		
		if(resp == 0){
			break;
		}	
			
		if(resp % 2 == 0){
			printf("\n Numero Par!");
			vetorPar[contPar] = resp;
			contPar++;
		}else{
			printf("\n Numero impar!");
			vetorImpar[contImpar] = resp;
			contImpar++;
		}
		
		printf("\n");
		printf("\n ----------------------");
		printf("\n");
		
	}while(!(resp == 0 || contImpar == 10 || contPar == 10));
	
	for (int i = 0; i < contImpar; i++){
		printf("\n Vetor Impar [%d]: %d", i, vetorImpar[i]);
	}
	
	printf("\n ----------------------");
	
	for (int i = 0; i < contPar; i++){
		printf("\n Vetor Par [%d]: %d", i, vetorPar[i]);
	}
}

