#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void inicio(){
	system("cls || clear");
	printf("======= M E N U =======\n");
	fflush(stdin);
	
}
int mediaAritmetica(int n1, int n2){
	int media;
	media = (n1+n2)/2;
	return media;
	
}


int main(){
	setlocale(LC_ALL,"");
	
	int n1, n2,media;
	
	inicio();
	printf("\nDigite o primeiro número: ");
		scanf("%i",&n1);
		
	inicio();
	printf("\nDigite o segundo número: ");
		scanf("%i",&n2);
		
	
	media = mediaAritmetica(n1, n2);
	
	
	printf("\nMédia: %i",media );
	
	
		
	return 0 ;
}



