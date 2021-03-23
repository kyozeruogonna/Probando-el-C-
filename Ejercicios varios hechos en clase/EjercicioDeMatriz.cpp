#include <stdio.h>
#include <windows.h>

int main(){
	printf("\n    Seleccione la cantidad de alumnos.\n");
	int r = 0, rr = 0, temp = 0;
	float notamed = 0.0;
	
	scanf("%d", &r);
	int alumnos[r][4];
	
	for(int j = 0; j<r; j++){
		printf("\n    Alumno %d:\n", j+1);
		for(int i = 0; i<4; i++){
			printf("\n    Escriba la nota %d del alumno:\n", i+1);
			scanf("%d", &rr);
			
			if(rr > 100){
				printf("\n    Selecciona un numero menor a 100.\n");
				i--;
			} else if(rr < 0){
				printf("\n    Selecciona un numero mayor a 0.\n");
				i--;
			} else{
				alumnos[j][i] = rr;
			}
		}
	}
	
	system("cls");
	
	for(int k = 0; k<r; k++){
		printf("\n    Alumno %d:\n", k+1);
		printf("    Sus notas han sido: \n");
		for(int l = 0; l<4; l++){
			temp += alumnos[k][l];
			printf(" %d ", alumnos[k][l]);
		}
		notamed = (float) temp / 4;
		printf("\n    Con una nota promedio de %.2f\n", notamed);
		
		if(notamed < 50){
			printf("\n    Por lo tanto, fue aplazado.\n");
		} else {
			printf("\n    Por lo tanto, fue aprobado.\n");
		}
	}
	
}
