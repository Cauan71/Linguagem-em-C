#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

	//Tela Inicio
void inicio(){
	system("cls || clear");
	printf("======= M E N U =======\n");
	fflush(stdin);
	
}
				//Funções
	//Média
	int mediaAritmetica(int n1, int n2){
	int media;
	media = (n1+n2)/2;
	return media;
	
}
	//Soma
	int somar(int n1, int n2){
	int soma;
	soma = n1+n2;
	return soma;
	
}

	//Subtração
	int subtrair(int n1, int n2){
	int subtracao;
	subtracao = n1-n2;
	return subtracao;
}


	//Multiplicação
	int multiplicar(int n1, int n2){
	int multiplicacao;
	multiplicacao = n1*n2;
	return multiplicacao;
}


	//Divisão
	int dividir(int n1, int n2){
	int divisao;
	divisao = n1/n2;
	return divisao;
}


int main(){
	setlocale(LC_ALL,"");
	
	//Declarando variáveis
	int n1, n2,media,soma, subtracao, multiplicacao, divisao;
	
	//Obtendo dados do usuário
	inicio();
	printf("\nDigite o primeiro número: ");
		scanf("%i",&n1);
		
	inicio();
	printf("\nDigite o segundo número: ");
		scanf("%i",&n2);
		
		
	//Aplicações
	media = mediaAritmetica(n1, n2);
	soma = somar(n1,n2);
	subtracao = subtrair(n1, n2);
	multiplicacao = multiplicar(n1,n2);
	divisao = dividir(n1,n2);
	
	
	
	//Exibindo Resultado para o usuário
	printf("\nMédia: %i",media );
	printf("\nSoma: %i",soma);
	printf("\nSubtração: %i",subtracao);
	printf("\nMultiplicação: %i",multiplicacao);
	printf("\nDivisão: %i",divisao);
	
	
	
		
	return 0 ;
}



