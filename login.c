#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	
	char login[200], senha[200];
	char loginCadastrado[200] = "Usuario";
	char senhaCadastrada[200] = "123";
	
	//fflush(stdin); 
	//Limpa cache do input.

	//system("cls || clear"); 
	//Limpa o terminal 
	
	printf("Digite o seu Login: ");
		scanf("%s",&login);
		
	printf("Digite a sua senha: ");
		scanf("%s",&senha);
		
		//&& == e
		// || == ou
		
		//Verificando se o login e senha estão corretos.
		//if(login == loginCadastrado && senha == senhaCadastrada){
		if(strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0 ){
			printf("Bem Vindo!!");
		}else{
			printf("Acesso Negado");
			
		}
		
		return 0 ;
		
		

}
