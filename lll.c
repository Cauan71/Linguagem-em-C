#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, numero, pares = 0, impares = 0;
	
	for(i = 1; i <=5; i++) {
		printf("Digite a %iº número: ",i);
			scanf("%i",&numero);
			
		if(numero % 2 == 0){
			//pares = pares + 1;
			pares++;
			
		}else{
			//Impares = impares + 1;
			impares++;
		}
}

	printf("\n========= Exibindo Resultado ========== \n");
	printf("Quantidade pares: %i \n", pares);
	printf("Quantidade Ímpares : %i \n",impares);
				
	
	return 0 ;
	
}
