#include<stdio.h>
#include<string.h>

//1. Escreva um programa na linguagem C que leia um vetor G de 10 elementos do tipo caracter que
// representa o gabarito de uma prova; a seguir, para cada um dos 20 alunos da turma, leia o vetor respostas do aluno (vetor R com 10 elementos
// do tipo caracter) e conte o n�mero de acertos. Para cada aluno, mostre o n�mero de acertos do aluno e a 
// mensagem de �Aprovado� se a quantidade de acertos for maior ou igual a 6, e uma mensagem �Reprovado� caso contr�rio. 

main(){
	char G[10], R[10];
	int i, x, acertos;
	
	for(i = 0; i < 10; i++){
		printf("\n Insira a o Gabarito da questao %d: ", i+1);
		scanf("%c", &G[i]);
		fflush(stdin);
	}
	
	for(x = 0; x < 20; x++){
		for(i = 0; i < 10; i++){
			printf("\n insira a resposta da questao %d do aluno %d: ", i+1, x+1);
			scanf("%c", &R[i]);
			fflush(stdin);
			
			if(R[i] == G[i]){
				acertos++;
			}
		}
		
		if(acertos >= 6){
			printf("\n Aprovado!");
		}else{
			printf("\n Reprovado!");
		}
		
		acertos = 0;
	}
	
	printf("\n FIM...");	
}
