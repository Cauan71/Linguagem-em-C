int main(){
	 
	 //Declarando vari�veis 
	 
	 int num1, num2, soma, subtracao, divisao, multiplicacao;
	 
	 
	 //Obtendo dados do usu�rio 
	 printf("Digite o primeiro n�mero: ");
	 	scanf("%i",&num1);
	 	
	printf("Digite o segundo n�mero: ");
		scanf("%i",&num2);
		
	//Realizando as opera��es
	soma = num1+num2;
	subtracao = num1-num2;
	divisao = num1/num2;
	multiplicacao = num1*num2;
	
	
	 //Exibindo os dados para o usu�rio 
	 
	 printf("================ R E S U L T A D O ===============");
	 printf("\nPrimeiro N�mero: %i",num1);
	 printf("\nSegundo N�mero: %i",num2);
	 printf("\nSoma: %i",soma);
	 printf("\nSubtra��o: %i",subtracao);
	 printf("\nDivis�o: %i",divisao);
	 printf("\nMultiplica��o: %i",multiplicacao);
	 
}
