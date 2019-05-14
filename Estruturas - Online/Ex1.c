#include<stdio.h>
#include<string.h>

struct professor{
	char nome[30], endereco[100], sexo[20], titulacao[20];
	int idade, telefone;
};

main(){
	
	struct professor professores[20];
	int i, medIdade = 0, auxIdade, contMasc = 0;
	char m[2] = "m", f[2] = "f";
	
	int tam = 20;
	
	for(i=0; i < tam; i++){
		printf("\n Professor: %d", i+1);
		
		printf("\n Nome: ");
		gets(professores[i].nome);
		
		printf("\n Telefone: ");
		scanf("%d", &professores[i].telefone);
		
		printf("\n Idade: ");
		scanf("%d", &auxIdade);
		medIdade += auxIdade;
		professores[i].idade = auxIdade;
		
		fflush(stdin);
		
		do{
			printf("\n Sexo (m/f): ");
			gets(professores[i].sexo);
			
			if(strcmp(professores[i].sexo, m) != 0 && strcmp(professores[i].sexo, f) != 0){
				printf("\n Insira o caracter valido(m/f)!");
			}
		}while(strcmp(professores[i].sexo, m) != 0 && strcmp(professores[i].sexo, f) != 0);
		
		if(strcmp(professores[i].sexo, m) == 0){
			contMasc++;
		}
		
		printf("\n Titulacao: ");
		gets(professores[i].titulacao);
		
		printf("\n Endereco: ");
		gets(professores[i].endereco);
		
	}
	
	medIdade = medIdade / tam;
	
	printf("\n Numero de professores do sexo masculino: %d", contMasc);
	printf("\n Media das idades de todos os professores: %d", medIdade);
	printf("\n Professores que estao acima da media de idade: ");
	
	for(i = 0; i < tam; i++){
		if(professores[i].idade > medIdade){
			printf("\n %s", professores[i].nome);
		}
	}
}
