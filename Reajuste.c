#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale (LC_ALL,"");
	
	//Declarando vari�veis
	char nome[50];
	float numero,valorReajuste;
	
	//Obtendo dados do usu�rio 
	
	printf("Digite o seu nome: ");
		scanf("%s",&nome);
	
	printf("Digite um n�mero: ");
		scanf("%f",&numero);
		
	//Realizando c�lculo
	valorReajuste = numero*0.1;
	
		
		
	//Exibindo resultado para o usu�rio 
	printf("\n============== R E S U L T A D O ==========");
	printf("\nNome: %s",nome);
	printf("\nN�mero: %.1f",numero);
	printf("\nValor com Reajuste : %.1f",valorReajuste);
	
	return 0 ;
	
}
