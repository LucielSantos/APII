#include<conio.h>
#include<stdio.h>

main(){
	char vetorGabarito[20], vetorResposta[20], resp, acertos;
	
	
	//Ler vetor do gabarito
	for(int i = 0; i < 20; i++){
		printf("\n Insira o gabarito da questao %d: ", i+1);
		scanf("%c", &resp);
		
		fflush(stdin);		
		
		vetorGabarito[i] = resp;
	}
	
	//ler vetor de respostas de cada aluno e faz verificação de quem foi aprovado
	for(int i = 0; i < 30; i++){
		printf("\n Aluno %d:", i+1);
		for(int x = 0; x < 20; x++){
			printf("\n Pergunta %d:", x+1);
			scanf("%c", &resp);
			
			fflush(stdin);
			
			vetorResposta[x] = resp;
		}
		for(int a = 0; a < 20; a++){
			if(vetorResposta[a] == vetorGabarito[a]){
				acertos++;
			}
		}
		
		if(acertos >= 12){
			printf("\n Aprovado! :)");
		}else{
			printf("\n Reprovado! :(");
		}
		
		printf("\n Numero de acertos: %d", acertos);
		
		printf("\n ---------------------------------------");
	}
}

