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
				//Fun��es
	//M�dia
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

	//Subtra��o
	int subtrair(int n1, int n2){
	int subtracao;
	subtracao = n1-n2;
	return subtracao;
}


	//Multiplica��o
	int multiplicar(int n1, int n2){
	int multiplicacao;
	multiplicacao = n1*n2;
	return multiplicacao;
}


	//Divis�o
	int dividir(int n1, int n2){
	int divisao;
	divisao = n1/n2;
	return divisao;
}


int main(){
	setlocale(LC_ALL,"");
	
	//Declarando vari�veis
	int n1, n2,media,soma, subtracao, multiplicacao, divisao;
	
	//Obtendo dados do usu�rio
	inicio();
	printf("\nDigite o primeiro n�mero: ");
		scanf("%i",&n1);
		
	inicio();
	printf("\nDigite o segundo n�mero: ");
		scanf("%i",&n2);
		
		
	//Aplica��es
	media = mediaAritmetica(n1, n2);
	soma = somar(n1,n2);
	subtracao = subtrair(n1, n2);
	multiplicacao = multiplicar(n1,n2);
	divisao = dividir(n1,n2);
	
	
	
	//Exibindo Resultado para o usu�rio
	printf("\nM�dia: %i",media );
	printf("\nSoma: %i",soma);
	printf("\nSubtra��o: %i",subtracao);
	printf("\nMultiplica��o: %i",multiplicacao);
	printf("\nDivis�o: %i",divisao);
	
	
	
		
	return 0 ;
}



