#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define s 30

void confirmacion(char *c,int i){
	char op[5][20]={"nombre","apellidoPaterno","apellidoMaterno","escuela","carrera",};
	while(strlen(c)<2){
		printf("ingrese otro %s del estudiante: ",op[i]);
		scanf("%s",&c);
	}
	return ;
}

struct alumno{
	int ID;
	char nom[s];
	char app[s];
	char apm[s];
	char cumple;
	char escuela[s];
	int grado;
	char carrera[s];
	char gene[s];
}alum[10];


int main(int argc, char *argv[]) {
	int i,k,x;

	for(i=0;i<10;i++){
		printf("Ingrese el ID del Alumno: ");
		scanf("%d",&alum[i].ID);
	
		if(i==0){
			for(k=0;k<i;k++){
				if(alum[i].ID==alum[k].ID){
					alum[i].ID =0;
				}
			}
		}
		printf("Ingrese el nombre del Alumno: ");
		scanf("%s",&alum[i].nom);
		confirmacion(alum[i].nom,0);
		
		printf("Ingrese el apellido paterno del Alumno: ");
		scanf("%s",&alum[i].app);
		confirmacion(alum[i].app,1);
	
		printf("Ingrese el apellido materno del Alumno: ");
		scanf("%s",&alum[i].apm);
		confirmacion(alum[i].apm,2);
	
		printf("Ingrese el cumpleaños del Alumno(DDMMAA): ");
		scanf("%s",&alum[i].cumple);
		while(alum[i].cumple < "01011940"){
			printf("Introduzca una fecha valida: ");
			scanf("%s",&alum[i].cumple);
		}
	
		printf("Ingrese la escuela del Alumno: ");
		scanf("%s",alum[i].escuela);
		confirmacion(alum[i].escuela,3);
	
		printf("Ingrese el grado del Alumno: ");
		scanf("%d",alum[i].grado);
		x=alum[i].grado%1;
		while(alum[i].grado<1 && x!=0){
			printf("ingrese un grado valido del estudiante: ");
			scanf("%d",&alum[i].grado);
		}
	
		printf("Ingrese carrera del Alumno: ");
		scanf("%s",alum[i].carrera);
		confirmacion(&alum[i].carrera,4);
	
		printf("Ingrese el genero del Alumno: ");
		scanf("%c",alum[i].gene);
		while(alum[i].gene!='M' || alum[i].gene!='F'){
			printf("ingrese un genero valido(M ó F): ");
			scanf("%c",&alum[i].gene);
		}
	}
	
	system("cls");
	for(i=0;i<10;i++){
		printf("%d	%s	%s	%s	%s	%s	%d	%s	%c",alum[i].ID,alum[i].nom,alum[i].app,alum[i].apm,alum[i].cumple,alum[i].escuela,alum[i].grado,alum[i].carrera,alum[i].gene);
		printf("\n");
		
	}
	return 0;
}
