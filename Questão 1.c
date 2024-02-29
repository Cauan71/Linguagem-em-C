int main(){
	 
	 //Declarando variáveis 
	 
	 int num1, num2, soma, subtracao, divisao, multiplicacao;
	 
	 
	 //Obtendo dados do usuário 
	 printf("Digite o primeiro número: ");
	 	scanf("%i",&num1);
	 	
	printf("Digite o segundo número: ");
		scanf("%i",&num2);
		
	//Realizando as operações
	soma = num1+num2;
	subtracao = num1-num2;
	divisao = num1/num2;
	multiplicacao = num1*num2;
	
	
	 //Exibindo os dados para o usuário 
	 
	 printf("================ R E S U L T A D O ===============");
	 printf("\nPrimeiro Número: %i",num1);
	 printf("\nSegundo Número: %i",num2);
	 printf("\nSoma: %i",soma);
	 printf("\nSubtração: %i",subtracao);
	 printf("\nDivisão: %i",divisao);
	 printf("\nMultiplicação: %i",multiplicacao);
	 
}
