#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num[5];
	int i;
	
	printf("Digite os elementos do vetor: \n");
	
	for(i=0;i<5;i++){
		printf("\nElemento: %d:  \n",i+1);
		scanf("%d",&num[i]);
		
	}
	
	system("cls || clear");
	
	for(i=0;i<5;i++){
		printf("\nElemento: %d: %d\n",i+1, num[i]);
		
	
	}
	
	return 0 ;
	
}
