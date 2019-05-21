#include<stdio.h>
#include<string.h>

struct carro{
	char nome[10], marca[10], placa[8];
	int ano, km;
};

main(){
	struct carro carros[100];
	int cont = 0, i = 0;
	char resp;
	char placaTemp[8];

	do{
		printf("\n INSERINDO CARRO [%d]: ", cont);
		
		fflush(stdin);
		
		printf("\n Insira o nome: ");
		gets(carros[cont].nome);
		
		printf("\n Insira a marca: ");
		gets(carros[cont].marca);
		
		printf("\n Insira a placa: ");
		gets(carros[cont].placa);
		
		printf("\n Insira o ano: ");
		scanf("%d", &carros[cont].ano);
		
		printf("\n Insira a quilometragem: ");
		scanf("%d", &carros[cont].km);
		
		fflush(stdin);
		
		printf("\n Deseja Inserir Outro Carro (s/n)? ");
		scanf("%c", &resp);
		
		fflush(stdin);
		
		while(resp != 's' && resp != 'n'){
			printf("\n INSIRA UMA RESPOSTA VALIDA! --> (s/n)");
			printf("\n Deseja Inserir Outro Carro (s/n)? ");
			scanf("%c", &resp);
			
			fflush(stdin);
		};
		
		printf("\n --------------------------------------------------");
		
		cont++;
		
	}while(i <= 100 && resp != 'n');
	
	fflush(stdin);

	
	printf("\n Deseja procurar carro por placa (s/n)? ");
	scanf("%c", &resp);
	
	fflush(stdin);
	
	while(resp != 's' && resp != 'n'){
		printf("\n INSIRA UMA RESPOSTA VALIDA! --> (s/n)");
		printf("\n Deseja procurar carro por placa (s/n)? ");
		scanf("%c", &resp);
		
		fflush(stdin);
	};
	
	printf("\n --------------------------------------------------");
	
	do{
		fflush(stdin);
		
		if(resp == 's'){
			printf("\n Insira a placa do carro a ser procurado: ");
			gets(placaTemp);
			
			printf("\n --------------------------------------------------");
			
			for(i = 0; i < cont; i++){
				if(strcmp(carros[i].placa, placaTemp) == 0){
					printf("\n CARRO[%d]", i);
					
					printf("\n Nome: %s", carros[i].nome);
					printf("\n Marca: %s", carros[i].marca);
					printf("\n Placa: %s", carros[i].placa);
					printf("\n Ano: %d", carros[i].ano);
					printf("\n Quilometragem: %d", carros[i].km);
					break;
				}else{
					if(i == cont-1){
						printf("\n PLACA %s NAO ENCONTRADA", placaTemp);
					}
				}
			}
			
			printf("\n --------------------------------------------------");
			
			printf("\n Deseja Procurar outro carro por placa (s/n)? ");
			scanf("%c", &resp);
			
			fflush(stdin);
			
			while(resp != 's' && resp != 'n'){
				printf("\n INSIRA UMA RESPOSTA VALIDA! --> (s/n)");
				printf("\n Deseja procurar outro carro por placa (s/n)? ");
				scanf("%c", &resp);
				
				fflush(stdin);
			};
			
			printf("\n --------------------------------------------------");	
		}
	}while(resp != 'n');
	
	printf("\n SAINDO...");
	
}

