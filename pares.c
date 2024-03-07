#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	
	int x;
	printf("Pares entre 100 e 120: ");
	
	for(x=100; x<=120; x++){
		if(x%2==0){
			printf("\n%i",x);
		}
		
		}
		

return 0;
	
}

