#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float nota, soma = 0, media;

	for(i=1; i<=2; i++){
	do{
		printf("Digite a %iº nota: \n",i);
			scanf("%f",&nota);
		
		
			
	
	}while(nota<0 || nota>10);
	
	soma = soma+nota;
}
	media = soma/2;
	printf("\nMédia: %.1f",media);
	

	
	
	return 0;
		

}
