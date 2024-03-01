#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	 //Declarando variáveis
	 
	 float salarioInformado, quantidadeSalario, salarioMinimo = 1412.00;
	 
	 //Solicitando dados para o usuário 
	 printf("Digite o salário: ");
	 	scanf("%f",&salarioInformado);
	 	
	//Verificando quantidade de salários
	quantidadeSalario = salarioInformado/salarioMinimo;
	
	// Exibindo resultados
	printf("\nSalário Informado: %.1f \n",salarioInformado);
	printf("\nQuantidade de Salários: %.1f \n",quantidadeSalario);
	
	return 0;
}
