#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num[3][3];
	int i,j,m;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Que numero quiere ingresar en la posicion %d,%d: ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	
	printf("\nQue valor escalar desea multiplicar la matriz: ");
	scanf("%d",&m);
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				num[i][j]=num[i][j]*m;
				printf("%4d",num[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
