#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	 //Declarando vari�veis
	 
	 float salarioInformado, quantidadeSalario, salarioMinimo = 1412.00;
	 
	 //Solicitando dados para o usu�rio 
	 printf("Digite o sal�rio: ");
	 	scanf("%f",&salarioInformado);
	 	
	//Verificando quantidade de sal�rios
	quantidadeSalario = salarioInformado/salarioMinimo;
	
	// Exibindo resultados
	printf("\nSal�rio Informado: %.1f \n",salarioInformado);
	printf("\nQuantidade de Sal�rios: %.1f \n",quantidadeSalario);
	
	return 0;
}
