#include<stdio.h>
#include<string.h>

//2. Escreva um programa em C para ler uma frase, de no máximo 100 caracteres, e uma letra.
//A seguir retirar da frase, todas as letras iguais a informada. Imprima a frase modificada. (2,0).

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
				frase[x] = frase[x+1];
				
				if(frase[x] == '\0'){
					break;
				}
				
			}
		}
	}
	
	printf("\n Frase Modificada: %s ", frase);
}
