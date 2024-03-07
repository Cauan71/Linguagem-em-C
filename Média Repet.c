#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	 
	float nota, media = 0; //soma = 0;
	
	for(i=1; i<=4; i++){
	
	printf("Digite a %iº nota: ",i);
		scanf("%f",&nota);
		
		//soma = soma +nota;
		media = media+nota/4;
		
		
}
		
		printf("\n====== R E S U L T A D O =======\n");
		printf("\n Resultado: %.1f",media);
	
	
	
	return 0 ;
	
}
