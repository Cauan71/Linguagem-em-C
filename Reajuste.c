#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale (LC_ALL,"");
	
	//Declarando variáveis
	char nome[50];
	float numero,valorReajuste;
	
	//Obtendo dados do usuário 
	
	printf("Digite o seu nome: ");
		scanf("%s",&nome);
	
	printf("Digite um número: ");
		scanf("%f",&numero);
		
	//Realizando cálculo
	valorReajuste = numero*0.1;
	
		
		
	//Exibindo resultado para o usuário 
	printf("\n============== R E S U L T A D O ==========");
	printf("\nNome: %s",nome);
	printf("\nNúmero: %.1f",numero);
	printf("\nValor com Reajuste : %.1f",valorReajuste);
	
	return 0 ;
	
}
