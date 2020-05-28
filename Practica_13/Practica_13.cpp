#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define s 30
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
					alum[i].ID=0000;
				}
			}
		}
		printf("Ingrese el nombre del Alumno: ");
		scanf("%s",&alum[i].nom);
		while(strlen(alum[i].nom)<2){
			printf("ingrese otro nombre del estudiante: ");
			scanf("%s",&alum[i].nom);
		}
	
		printf("Ingrese el apellido paterno del Alumno: ");
		scanf("%s",&alum[i].app);
		while(strlen(alum[i].app)<2){
			printf("ingrese otro apellido paterno del estudiante: ");
			scanf("%s",&alum[i].app);
		}
	
		printf("Ingrese el apellido materno del Alumno: ");
		scanf("%s",&alum[i].apm);
		while(strlen(alum[i].apm)<2){
			printf("ingrese otro apellido materno del estudiante: ");
			scanf("%s",&alum[i].apm);
		}
	
		printf("Ingrese el cumpleaños del Alumno(DDMMAA): ");
		scanf("%s",&alum[i].cumple);
		while(alum[i].cumple < 1011940){
			printf("Introduzca una fecha valida: ");
			scanf("%s",&alum[i].cumple);
		}
	
		printf("Ingrese la escuela del Alumno: ");
		scanf("%s",alum[i].escuela);
		while(strlen(alum[i].escuela)<2){
			printf("ingrese otro nombre de la escuela del estudiante: ");
			scanf("%s",&alum[i].escuela);
		}
	
		printf("Ingrese el grado del Alumno: ");
		scanf("%d",alum[i].grado);
		x=alum[i].grado%1;
		while(alum[i].grado<1 && x!=0){
			printf("ingrese un grado valido del estudiante: ");
			scanf("%d",&alum[i].grado);
		}
	
		printf("Ingrese carrera del Alumno: ");
		scanf("%s",alum[i].carrera);
		while(strlen(alum[i].carrera)<2){
			printf("ingrese otro nombre de carrera valida: ");
			scanf("%s",&alum[i].carrera);
		}
	
		printf(" el genero del Alumno: ");
		scanf("%c",alum[i].gene);
		while(alum[i].gene != "M" || alum[i].gene!= "F"){
			printf("ingrese un genero valido(M ó F): ");
			scanf("%c",&alum[i].gene);
		}
	}

	
	FILE *pf;
	char *imprimir="salida.txt";
	pf = fopen(imprimir,"w+");
	fprintf(pf,"\"students\": \[\n");
	for(i=0;i<10;i++){	
		fprintf(pf,"\{ \"ID\": %d  \"Nombre\": %s  \"apellido paterno\": %s  \"Apellido Materno\": %s  \"Cumpleaños\": %s  \"Escuela\": %s  \"Grado\": %d  \"Carrera\": %s \"Genero\": %s \}",alum[i].ID,alum[i].nom,alum[i].app,alum[i].apm,alum[i].cumple,alum[i].escuela,alum[i].grado,alum[i].carrera,alum[i].gene);
	}
	fprintf(pf,"\]");
		
	fclose(pf);
	return 0;
}
