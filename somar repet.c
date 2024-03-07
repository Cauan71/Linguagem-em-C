#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float nota, soma;
	
	for(i = 1; i <=5; i++) {
		printf("Digite a %iº nota: ",i);
			scanf("%f",&nota);
			
	
	
	soma = soma+nota;
}
	printf("\n ============== R E S U L T A D O =============");
	printf("\nSoma: %.1f",soma);
	
	return 0 ;
	
}
