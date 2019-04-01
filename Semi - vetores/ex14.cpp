#include<conio.h>
#include<stdio.h>

main(){
	int  vetorGabarito[5], vetorResposta[10], resp, acertos;
	
	for(int i = 0; i < 5; i++){
		printf("\n numero %d da Loto: ", i+1);
		scanf("%d", &resp);
		
		vetorGabarito[i] = resp;
	}
	
	for(int i = 0; i < 10; i++){
		printf("\n %d da Aposta:", i+1);
		scanf("%d", &resp);
		
		vetorResposta[i] = resp;
	}
	
	for(int a = 0; a < 5; a++){
		for(int b = 0; b < 10; b++){
			if(vetorGabarito[a] == vetorResposta[b]){
				acertos++;
			}
			
			if(acertos == 5){
				break;
			}
		}
		
		if(acertos == 5){
			break;
		}
	}
	
	printf("\n -------------------------------------------");
	
	printf("\n Número de acertos: %d", acertos);
}

