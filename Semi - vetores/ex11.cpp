#include<conio.h>
#include<stdio.h>

//11.	Elaborar um programa que leia um conjunto de 30 valores e os coloque em 2 vetores conforme forem pares ou ímpares.
//O tamanho de cada vetor é de 5 posições. Se algum estiver cheio, escreve-lo.
//Terminada a leitura, escrever o conteúdo dos dois vetores. Cada vetor
//pode ser preenchido tantas vezes quantas forem necessárias.

main(){
	
	int vetorPar[5], vetorImpar[5], resp;
	int contPar, contGeral = 0;
	int contImpar = 0;
	
	do{
		printf("\n Insira um Valor: ");
		scanf("%d", &resp);
		
		if(resp % 2 == 0){
			printf("\n Numero Par!");
			
			vetorPar[contPar] = resp;
			contPar++;
			
			if(contPar == 5){
				printf("\n ---------------------------------");
				
				printf("\n VETOR DE NUMEROS PARES ESTA CHEIO; IMPRIMINDO...");
				for(int i = 0; i < contPar; i++){
					printf("\n Vetor Par [%d]: %d", i, vetorPar[i]);
				}
				
				contPar = 0;
			
				printf("\n ---------------------------------");
			}
		}else{
			printf("\n Numero impar!");
			
			vetorImpar[contImpar] = resp;
			contImpar++;
			if(contImpar == 5){
				printf("\n ---------------------------------");
				
				printf("\n VETOR DE NUMEROS IMPARES ESTA CHEIO; IMPRIMINDO...");
				for(int i = 0; i < contImpar; i++){
					printf("\n Vetor Impar [%d]: %d", i, vetorImpar[i]);
				}
				
				contImpar = 0;
				
				printf("\n ---------------------------------");
			}
		}
		
		printf("\n ---------------------------------");
				
		contGeral++;
		
	}while(contGeral < 30);
	
	printf("\n LIMITE MAXIMO DE INSERCOES ATINGIDO: 30; IMPRIMINDO OS VETORES...");
	
	printf("\n VETOR DE NUMEROS PARES: ");
	
	for(int i = 0; i < contPar; i++){
		printf("\n Vetor Par [%d]: %d", i, vetorPar[i]);
	}
	
	printf("\n ---------------------------------");
	
	printf("\n VETOR DE NUMEROS IMPARES: ");
	
	for(int i = 0; i < contImpar; i++){
		printf("\n Vetor Impar [%d]: %d", i, vetorImpar[i]);
	}
}

