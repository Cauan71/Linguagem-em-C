#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void inicio(){
	system("cls || clear");
	printf("======= M E N U =======\n");
	fflush(stdin);
	
}
int mediaAritmetica(int n1, int n2){
	int media;
	media = (n1+n2)/2;
	return media;
	
}

int somar(int n1, int n2){
	int soma;
	soma = n1+n2;
	return soma;
	
}
	int subtrair(int n1, int n2){
	int subtracao;
	subtracao = n1-n2;
	return subtracao;
}


int main(){
	setlocale(LC_ALL,"");
	
	int n1, n2,media,soma, subtracao;
	
	inicio();
	printf("\nDigite o primeiro número: ");
		scanf("%i",&n1);
		
	inicio();
	printf("\nDigite o segundo número: ");
		scanf("%i",&n2);
		
	
	media = mediaAritmetica(n1, n2);
	soma = somar(n1,n2);
	subtracao = subtrair(n1, n2);
	
	
	printf("\nMédia: %i",media );
	printf("\nSoma: %i",soma);
	printf("\nSubtração: %i",subtracao);
	
	
		
	return 0 ;
}



