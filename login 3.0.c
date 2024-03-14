#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL,"");
		
	
	char login[200] ;
	char senha[200] ;
	char loginCadastrado[200]="login";
	char senhaCadastrada[200]="senha";
	bool senhaCorreta ;
	bool loginCorreto;
	//bool acessarSistema;
	
	
	
	do{
		printf("Digite o login: ");	
			scanf("%s",&login);
		
		printf("Digite a senha: ");
			scanf("%s",&senha);
			
			
	loginCorreto= strcmp(loginCadastrado,login) == 0;
	senhaCorreta = strcmp(senhaCadastrada,senha) == 0;
	
	// acessarSistema = loginCorreto && senhaCorreta;
	 //ignora p continuação 
	if(loginCorreto){
		printf("O login está correto \n");
	}
	
	if(senhaCorreta){
		printf("A senha está correta \n");
		
	}
		//while(!acessarSistema);
	}while(!loginCorreto || !senhaCorreta);
	
	
	printf("\nAcessando o sistema......");
	

	return 0;
	
}

