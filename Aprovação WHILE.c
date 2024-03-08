#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float nota, soma = 0, media;

	for(i=1; i<=3; i++){
	do{
		printf("Digite a %iº nota: \n",i);
			scanf("%f",&nota);
		
		
			
	
	}while(nota<0 || nota>10);
	
	soma = soma+nota;
}
	media = soma/3;
	printf("\nMédia: %.1f",media);
	
	if(media>=7){
		printf("\nAPROVADO!! ");
	}else{
		if(media >=5 && media <=6.9){
			printf("\nRECUPERAÇÃO!!");
		}else{
			printf("\nREPROVADO!!");
		}
	}
	

	
	
	return 0;
		

}
