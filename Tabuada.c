#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	
	printf("Tabuada do número : 5 \n");
	for(i = 1;i<=10; i++){
		printf("%i x %i = %i\n", 5, i , 5*i);
		
	}
	printf("\n\nTabuada do número : 7 \n");
	for(i =1; i<=10; i++){
		printf("%i x %i = %i\n", 7,i,7*i);
		
	}
	
	return 0;
}
