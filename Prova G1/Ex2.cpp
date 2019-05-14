#include<stdio.h>
#include<string.h>

main(){
	char frase[100], letra;
	int i, x;

	printf("\n Insira a frase: ");
	gets(frase);
	
	printf("\n Insira a letra a ser removida: ");
	scanf("%c", &letra);
		
	for(i = 0; i < 100; i++){
		if(frase[i] == '\0'){
			break;
		}
		
		if(frase[i] == letra){
			for(x = i; x < 100-i; x++){
				if(frase[x] == '\0'){
					break;
				}
				
				frase[x] = frase[x+1];
			}
		}
	}
	
	printf("\n Frase Modificada: %s ", frase);
}

