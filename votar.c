#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL,"");
	int idade;
	
	printf("Digite sua idade: ");
		scanf("%i",&idade);
		
	if(idade >=18 && idade <=65){
		printf("Precisa Votar!!");
		
	}else {
		printf("Não precisa Votar!!");
		
	}
	
	return 0 ;
	
	
}
