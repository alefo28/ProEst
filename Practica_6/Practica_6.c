#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,s=0,d=0;
	do{
	printf("Ingrese un numero mayor o igual a cero o un numero negativo para terminar: ");
	scanf("%d",&i);
	s=s+i;
	d++;

	}while(i>=0);
		s=s-i;
		d--;
	
	float p= s/d;
	printf("\nEl promedio es : %.2f",p);
	return 0;
}
