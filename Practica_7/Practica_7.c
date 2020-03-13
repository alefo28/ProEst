#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,b,n,mult;
	
	printf("Ingrese un numero de base: ");
	scanf("%d",&b);
	
	printf("\nUn numero de multiplos a generar:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		mult=b*(i+1);
		printf("\n %d ",mult);
	}
	
	return 0;
}
