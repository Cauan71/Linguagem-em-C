#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

float inflacionar(float preco){
	float novoPreco;
	
		if(preco<100){
		novoPreco = preco*1.1;
	}else{
		novoPreco = preco*1.2;
		
	}
	return novoPreco;
	
}


int main(){
	setlocale(LC_ALL,"");
	
	float preco,resultado;
	
	
	
	
	
	printf("Digite o preço do produto: ");
		scanf("%f",&preco);
		
	
	resultado = inflacionar(preco);
	
	
	printf("\nResultado: R$ %.2f",resultado);
	
		
	return 0;
	
}

