#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>	
#include <stdlib.h>

void carregar(){
	printf("CARREGANDO ........\n");
}
int main(){
	setlocale(LC_ALL,"");
	
	
	int num[6];
	int pares=0 ,impares=0;
	
	int i;
	
	printf("************************************\n");
	printf("		MENU\n");
	printf("************************************\n");
	for(i=0;i<6;i++){
		printf("\nDigite o %i� n�mero: ",i+1);
			scanf("%i",&num[i]);
			
			if(num[i] %2 == 0){
			 pares++;
			}
			else{
				impares++;	
			}
		}
		system("cls || clear");
	
		carregar();
		sleep(3);
		
		system("cls || clear");
		printf("===============================\n");
		printf("	DADOS OBTIDOS\n");
		printf("===============================\n");	
		for(i=0;i<6;i++){
		printf("\n%i� N�mero Informado: %i",i+1, num[i]);
		
	}
		printf("\n\nQuantidade de n�meros pares: %i",pares);
		printf("\nQuantidade de n�meros impares: %i",impares);
		
		
	return 0 ;
	
	}
