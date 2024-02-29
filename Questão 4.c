#include <stdio.h>

int main(){

	//Declarando variáveis
	 int num1, antecessor, sucessor;
	 
	//Obtendo dados
	printf("Digite um número: ");
		scanf("%i",&num1);
		
	antecessor = num1-1;
	sucessor = num1+1;
	
	
	//Exibindo resultado
	printf("\n============= R E S U L T A D O ============");
	printf("\n\nNúmero digitado: %d",num1);
	printf("\nNúmero Antecessor: %d",antecessor);
	printf("\nNúmero Sucessor: %d",sucessor);
	
	
	return 0 ;

}
