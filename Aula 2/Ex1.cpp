#include<conio.h>
#include<stdio.h>

main(){
	int idade;
	
	printf("Insira a sua idade: ");
	scanf("%d", &idade);
	
	if(idade>= 18 && idade<=60){
		printf("Voto Obrigatorio!");
	}else if(idade >=16 || idade<18 && idade >60){
			printf("Voto Nao Obrigatorio!");
		}else{
			printf("Nao pode votar!");
		}
}

