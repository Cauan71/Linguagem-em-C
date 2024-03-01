#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL,"");
	//Declarando variáveis
	int idade;

	//Obtendo dados do usuário 
	printf("Digite sua idade: ");
		scanf("%i",&idade);

	//Requerimento de idade 
	if(idade >=18 && idade <=65){
		printf("Precisa Votar!!");
		
	}else {
		printf("Não precisa Votar!!");
		
	}
	
	return 0 ;
	
	
}
