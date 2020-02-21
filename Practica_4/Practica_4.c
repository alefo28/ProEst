#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char o;
	float n1,n2,r;
	printf("Ingrese la operacion que quiera hacer:(+ - * /): ");
	scanf("%c",&o);
	if( o=='+' || o=='-' || o=='*' || o=='/'){
	
	printf("primer numero: \n");
	scanf("%f",&n1);
	printf("segundo  numero: \n");
	scanf("%f",&n2);
	
	switch(o){
		case '+':
			r= n1+n2;break;
		case '-':
			r=n1-n2;break;
		case '*':
			r= n1*n2;break;
		case '/':
			r=n1/n2;break;
	}
		printf("%.2f %c %.2f = %.2f",n1,o,n2,r);
	}
	else
		printf("Operador invalido");	
	return 0;
}
