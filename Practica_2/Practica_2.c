#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=2 , b=3;
	printf("Enteros\n%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d mod %d = %d\n",a,b,a%b);
	printf("%d ++ %d = %d\n",a,b,++b);
	printf("%d -- %d = %d\n\n",a,b,--b);
	
	float  c = 2.34, d= 5.23;
	printf("flotantes\n%g + %g = %g\n",c,d,c+d);
	printf("%g - %g = %g\n",c,d,c-d);
	printf("%g * %g = %g\n",c,d,c*d);
	printf("%g / %g = %g\n",c,d,c/d);
	printf("%g > %g = %d\n",c,d,c>d);
	printf("%g < %g = %d\n",c,d,c<d);
	printf("%g == %g = %d\n",c,d,c==d);
	printf("%g >= %g = %d\n",c,d,c>=d);
	printf("%g <= %g = %d\n\n",c,d,c<=d);
	
	double z = 5.2, y = 3.2;
	printf("Doble\n%g + %g = %g\n",z,y,z+y); 
	int x = 3;
	printf("caracteresssss\n%x << 2 = %x\n",x,x<<2);
	//printf("%s >> %s = %s\n",e,f,e>>2);

	bool g = 1, h = 2	;
	printf("booleanos\n%d && %d = %d\n",g,h,g&&h);
	printf("%d || %d = %d\n",g,h,g||h);
	
	return 0;
}
