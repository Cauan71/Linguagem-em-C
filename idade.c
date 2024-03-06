#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

	int idade(int anoNascimento){
	
		return 2024 - anoNascimento;
		
}
	int main(){
		setlocale(LC_ALL,"");
			
		int anoNascimento, resultado;
	
		printf("Digite o ano do seu Nascimento: ");
			scanf("%i",&anoNascimento);
		
		resultado = idade(anoNascimento);
		
		

	
	
		printf("Você tem : %i Anos",resultado);
	
		return 0 ;
		
}
