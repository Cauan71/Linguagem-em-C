#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

	float mediaAritmetica(float n1, float n2){
		return (n1+n2)/2;
		
		
	}

	

	int main(){
		setlocale(LC_ALL,"");
	
		char nome[200];
		float primeiraNota, segundaNota,media;
		
	
		
		
	
		printf("Digite seu nome:");
			scanf("%s",&nome);
		
		printf("Digite sua primeira Nota: ");
			scanf("%f",&primeiraNota);
		
		printf("Digite sua Segunda Nota: ");
			scanf("%f",&segundaNota);
			
		media = mediaAritmetica(primeiraNota, segundaNota);
		
		
		printf("\nMédia: %.2f \n",media);
		
		
			
			
	
		


		
		
		
	return 0;
	
}
