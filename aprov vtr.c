#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>	
#include <stdlib.h>

//#define TAM 4

	int main(){
		setlocale(LC_ALL,"");
		
		//float notas[TAM]
		float notas[4], soma=0, media;
		int i;
		char resultado[200];
		
		
			printf("\n===Solicitanto notas =====\n");
			
		//for(i = 0 ; i < TAM  ; i++){
		for(i = 0 ; i < 4  ; i++){
			do{
			
			printf("Digite a %i nota : ", i+1);
				scanf("%f",&notas[i]);
	
				soma += notas[i];
		}while(notas[i]<0 && notas[i]>10);
	
	
		}
			//media = soma/ TAM;
			media = soma / i;
			
		if(media>=7){
			strcpy(resultado, "APROVADO!!");
			
		}if(media<7 && media >=5){
			strcpy(resultado,"RECUPERAÇÃO");
			
		}
		if(media<5){
			strcpy(resultado,"REPROVADO");
		
		}
			
		system("cls || clear");
	
		printf("\n======= R E S U L T A D O =======\n");
		
		for(i = 0; i < 4; i++){
			
			printf("%iº nota: %.1f	\n", i+1 , notas[i]);
		}
		
		printf("Média : %.1f \n",media);
		printf("Situação: %s",resultado);
		
	
	
	return 0;
	
}
	
