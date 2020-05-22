#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char estudiantes[10][9][100];
	char op[9]={"id","nombre","apellidoPaterno","apellidoMaterno","nacimiento(DDMMAAAA)","escuela","grado","carrera","genero(M o F)"};
	int i,j,k,x;
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			printf("ingrese %s del estudiante: ",op[j]);
			scanf("%s",&estudiantes[i][j]);
			
			if(i!=0){
				switch(j){
					case 0:
						for(k=0;k<i;k++){
							if(estudiantes[i][j]==estudiantes[k][j]){
							estudiantes[i][j]="XXXX";
							}
						}
					break;
					case 1:
						while(strlen(estudiantes[i][j])<2){
							printf("ingrese otro nombre del estudiante: ");
							scanf("%s",&estudiantes[i][j]);
						}
					break;
					case 2:
						while(strlen(estudiantes[i][j])<2){
							printf("ingrese otro apellido paterno del estudiante: ");
							scanf("%s",&estudiantes[i][j]);
						}
					break;
					case 3:
						while(strlen(estudiantes[i][j])<2){
							printf("ingrese otro apellido materno del estudiante: ");
							scanf("%s",&estudiantes[i][j]);
						}
					break;
					case 4:
						while(estudiantes[i][j]<"01011940"){
							printf("Introduzca una fecha valida: ");
							scanf("%s",&estudiantes[i][j]);	
						};
					break;
					case 5:
						while(strlen(estudiantes[i][j])<2){
							printf("ingrese otro nombre de la escuela del estudiante: ");
							scanf("%s",&estudiantes[i][j]);
						}
					break;
					case 6:
						x=estudiantes[i][j]%1;
						while(estudiantes[i][j]<1 && x!=0){
							printf("ingrese un grado valido del estudiante: ");
							scanf("%d",&estudiantes[i][j]);
						}
					break;
					case 7:
						while(strlen(estudiantes[i][j])<2){
							printf("ingrese otro nombre de carrera valida: ");
							scanf("%s",&estudiantes[i][j]);
						}
					break;
					case 8:
						if(estudiantes[i][j]!='M' || estudiantes[i][j]!='F'){
							printf("ingrese un genero valido(M ó F): ");
							scanf("%s",&estudiantes[i][j]);
						}
					break;
				}
			}
			
			}
			
		}
	
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			printf("%s",estudiantes[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

	

