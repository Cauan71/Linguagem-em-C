#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void verificarnumero(numero){
	if(numero == 0){
		printf("Zero é neutro");
		
	}else if(numero > 0 ){
		printf("Positivo");
	}else{ 
	printf("Negativo");
	
	}
}


int main(){
	setlocale(LC_ALL,"");
	
	int numero;
	
	
	printf("Digite um número: ");
		scanf("%i",&numero);
		
	verificarnumero(numero);
	
	return  0 ;
}
