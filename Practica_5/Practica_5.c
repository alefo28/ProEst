#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,s,d=0;
	
	printf("Ingrese un numero mayor o igual a cero o un numero negativo para terminar: ");
	scanf("%d",&i);
	while(i>=0){
		s=s+i;
		d++;
		printf("Ingrese un numero mayor o igual a cero o un numero negativo para terminar: ");
		scanf("%d",&i);	
	}
	float p= s/d;
	printf("\nEl promedio es : %.2f",p);
	return 0;
}
