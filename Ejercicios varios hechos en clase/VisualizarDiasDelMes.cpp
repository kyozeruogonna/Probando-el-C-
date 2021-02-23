#include <stdio.h>

// Autor Jhonatan Marcano

int main() {
	
	int scan, exit, num;
	
	while(exit != 2) {
		
		scan = 0;
		
		printf("    ------------------------------------------------------------------ \n");
		printf("    |                                                                | \n");
		printf("    |                   En este pograma podras ver                   | \n");
		printf("    |                       el nombre del mes                        | \n");
		printf("    |                      y cuantos dias tiene                      | \n");
		printf("    |              al colocar un numero entre el 1 y el 12           | \n");
		printf("    |                                                                | \n");
		printf("    |               1)Colocar numero          2)Salir                | \n");
		printf("    |                                                                | \n");
		printf("    |               Escribe el numero y presione Enter               | \n");
		printf("    ------------------------------------------------------------------ \n\n");
		
		scanf("%d", &scan);
		
		if(scan == 1){
			
			printf("\n    Coloque el numero al cual quieres ver su cantidad de dias. \n");
			
			scanf("%d", &num);
			
			if(num == 1){
				printf("    El mes de enero tiene 31 dias");
			}else if(num == 2){
				printf("    El mes de febrero tiene 28 dias");
			}
			else if(num == 3){
				printf("    El mes de marzo tiene 31 dias");
			}
			else if(num == 4){
				printf("    El mes de abril tiene 30 dias");
			}
			else if(num == 5){
				printf("    El mes de mayo tiene 31 dias");
			}
			else if(num == 6){
				printf("    El mes de junio tiene 30 dias");
			}
			else if(num == 7){
				printf("    El mes de julio tiene 31 dias");
			}
			else if(num == 8){
				printf("    El mes de agosto tiene 31 dias");
			}
			else if(num == 9){
				printf("    El mes de septiembre tiene 30 dias");
			}
			else if(num == 10){
				printf("    El mes de octubre tiene 31 dias");
			}
			else if(num == 11){
				printf("    El mes de noviembre tiene 30 dias");
			}
			else if(num == 12){
				printf("    El mes de diciembre tiene 31 dias");
			}else{
				printf("\n    Por favor, elija una opcion valida. \n\n");
			}
			fflush(stdin);
			
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
