#include <stdio.h>

int main(void){

	//Declarando vari�veis
	 int num1, antecessor, sucessor;
	 
	//Obtendo dados
	printf("Digite um n�mero: ");
		scanf("%i",&num1);
		
	antecessor = num1-1;
	sucessor = num1+1;
	
	
	//Exibindo resultado
	printf("\n============= R E S U L T A D O ============");
	printf("\n\nN�mero digitado: %d",num1);
	printf("\nN�mero Antecessor: %d",antecessor);
	printf("\nN�mero Sucessor: %d",sucessor);
	
	
	return 0 ;

}
