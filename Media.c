#include <locale.h>
#include <stdio.h>

int main(){
		setlocale(LC_ALL,"");
	//Declarando variáveis
	char nome[50];
	int idade;
	float nota1, nota2, nota3,media;
	
	//Obtendo dados do usuário 
	printf("Digite o seu nome: ");
		scanf("%s",&nome);
		
	printf("Digite a sua idade: ");
		scanf("%i",&idade);
		
	printf("Digite sua primeira nota: ");
		scanf("%f",&nota1);
		
	printf("Digite sua segunda nota: ");
		scanf("%f",&nota2);
		
	printf("Digite sua terceira nota: ");
		scanf("%f",&nota3);
		
		
	media = (nota1+nota2+nota3)/3;
	

	system("cls");
	
		
	//Exibindo resultados
	printf("\n============== R E S U L T A D O ===============");
	printf("\nNome: %s",nome);
	printf("\nIdade: %i",idade);
	printf("\nMédia: %.1f",media);
	
	
		
	if(media>=7){
		printf("\nAluno(a) Aprovado(a)!!");
	}else{
		printf("\nAluno(a) Reprovado(a)!!");
		
	}
}
