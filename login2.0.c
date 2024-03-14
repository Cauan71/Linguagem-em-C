#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	char login[200] ;
	char senha[200] ;
	char loginCadastrado[200]="login";
	char senhaCadastrada[200]="senha";
	
	
	do{
		printf("Digite o login: ");	
			scanf("%s",&login);
		
		printf("Digite a senha: ");
			scanf("%s",&senha);
			
		
	}while(strcmp(loginCadastrado,login) !=0 || strcmp(senhaCadastrada,senha) !=0);
	
	printf("\nAcessando o sistema......");
	

	return 0;
	
}

