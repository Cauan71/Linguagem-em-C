#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int contador = 0;
	char resposta;
	float nota,media,soma=0;
	

		do{
			fflush(stdin);
			printf("Deseja inserir uma nota? ");
			scanf("%c",&resposta);
			
			resposta = toupper(resposta);
			
			
			if(resposta != 'N'){
				printf("Digite a %dº nota: ",contador+1);
				scanf("%f",&nota);
				
				soma = soma+nota;
				contador = contador+1;
			}
		}while(resposta != 'N');
		
			media = soma/contador;
			printf("Média: %.1f \n",media);
			
				return 0 ;
			}
				
	
