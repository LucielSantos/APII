#include<conio.h>
#include<stdio.h>

main(){
	float valorAtual, maiorValor, valorTotal, valorMedio;
	int numeroVendas, contador;
	char resposta;
	
	maiorValor=0;
		
	for(contador=0; contador<=200; contador++){
		printf("\n Insira o valor da venda: R$ ");
		scanf("%f", &valorAtual);
		
		printf("\n Outra Venda(s/n)? ");
		scanf("%c", &resposta);
		
		valorTotal+=valorAtual;
		
		numeroVendas++;
		
		if(valorAtual>maiorValor){
			maiorValor=valorAtual;
		} 
		
		if(resposta=='n'){
			break;
		}				
	}
	
	valorMedio = valorTotal/numeroVendas;
	
	printf("\n Número de vendas realizadas: %d", numeroVendas);
	printf("\n Valor Total de vendas do dia: %d", valorTotal);
	printf("\n Valor médio das vendas: %d", valorMedio);
	printf("\n Venda de Maior valor: %d", maiorValor);
	
}
