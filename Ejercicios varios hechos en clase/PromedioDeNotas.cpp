#include <stdio.h>

// Autor Jhonatan Marcano

int main() {
	
	int scan, exit, nota, uno, dos, tres, cuatro, cinco;
	
	while(exit != 2) {
		
		scan = 0;
		
		printf("    ------------------------------------------------------------------ \n");
		printf("    |                                                                | \n");
		printf("    |                En este pograma podras colocar                  | \n");
		printf("    |                       5 notas diferentes                       | \n");
		printf("    |                     Y obtener su promedio                      | \n");
		printf("    |                                                                | \n");
		printf("    |                1)Colocar notas          2)Salir                | \n");
		printf("    |                                                                | \n");
		printf("    |               Escribe el numero y presione Enter               | \n");
		printf("    ------------------------------------------------------------------ \n\n");
		
		scanf("%d", &scan);
		
		if(scan == 1){
			
		printf("\n    Coloca las notas que has obtenido en una escala del 1 al 20.\n\n");
		
			for(int i = 1; i < 6; i++) {
				
				printf("\n    Coloca su %d nota. \n", i);
			
				scanf("%d", &nota);
			
				if(nota >= 1 && nota <= 20) {
					
					if(i == 1){
						uno = nota;
					} else if(i == 2){
						dos = nota;
					} else if(i == 3){
						tres = nota;
					} else if(i == 4){
						cuatro = nota;
					}else if(i == 5){
						cinco = nota;
					}
				
				}else{
					printf("\n    Por favor, elija una opcion valida. \n\n");
					fflush(stdin);
				i--;
				}
			
			}
			
			int promedio = (uno+dos+tres+cuatro+cinco)/5;
		
			switch(promedio) {
					case 1:case 2:case 3: case 4:case 5: case 6:case 7:case 8: case 9:
						printf("\n\n    Reprobado. \n\n");
						printf("    Con un promedio de %.2d.\n", promedio);
						break;
					case 10:case 11: case 12: case 13:
						printf("\n\n    Deficiente. \n\n");
						printf("    Con un promedio de %.2d.\n", promedio);
						break;
					case 14: case 15:
						printf("\n\n    Regular. \n\n");
						printf("    Con un promedio de %.2d.\n", promedio);
						break;
					case 16: case 17:
						printf("\n\n    Bueno. \n\n");
						printf("    Con un promedio de %.2d.\n", promedio);
						break;
					case 18: case 19:
						printf("\n\n    Excelente. \n\n");
						printf("    Con un promedio de %.2d.\n", promedio);
						break;
					case 20:
						printf("\n\n    Maxima nota. \n\n");
						printf("    Con un promedio de %.2d.\n", promedio);
						break;
					default:
						printf("\n\n    Como llegaste aqui? \n\n");
						break;
			}
			
			return 0;
		
		}else if(scan == 2) {
			
			printf("\n    Has salido del programa.\n\n");
			exit = 2;
			
		}else{
			printf("\n    Por favor, elija una opcion valida. \n\n");
		}
		fflush(stdin);
		
	}
	
}
