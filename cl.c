#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

	float calculo(float n1, float n2){
		return (n1+n2)/2;
	}
		
		
		void resultado(float media){	
		if(media>=7){
			printf("Aprovado");
		}
		else{
			printf("Reprovado");
			
		}
	}


	int main(){
		setlocale(LC_ALL,"");
	
	
		float primeiraNota, segundaNota,media;
		
		printf("Digite sua primeira Nota: ");
			scanf("%f",&primeiraNota);
		
		printf("Digite sua Segunda Nota: ");
			scanf("%f",&segundaNota);
			
		media = calculo(primeiraNota, segundaNota);

		
		printf("\nMédia: %.2f \n",media);	
		resultado(media);
		
		
		
		
	return 0;
	
}
