#include<conio.h>
#include<stdio.h>

main(){
	float qtd;
	
	printf("Insira qtd de macas: ");
	scanf("%f", &qtd);
	
	if(qtd>=12){
		printf("Valor total: %f", 0.25*qtd);
	}else{
		printf("Valor total: %f", 0.30*qtd);
	}
}

