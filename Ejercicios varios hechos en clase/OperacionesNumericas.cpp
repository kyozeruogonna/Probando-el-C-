#include <stdio.h>
#include <math.h>

// Autor Jhonatan Marcano

int main() {
	
	int scan, exit;
	float a, b, c, m;
	
	while(exit != 2) {
		
		scan = 0;
		
		printf("    ------------------------------------------------------------------ \n");
		printf("    |                                                                | \n");
		printf("    |                  En este pograma podras colocar                | \n");
		printf("    |        tres numeros con o sin decimales que seran operados     | \n");
		printf("    |                segun el resultado de su sumatoria              | \n");
		printf("    |                                                                | \n");
		printf("    |                  1)Continuar          2)Salir                  | \n");
		printf("    |                                                                | \n");
		printf("    |                Escribe el numero y presione Enter              | \n");
		printf("    ------------------------------------------------------------------ \n\n");
		
		scanf("%d", &scan);

		while(exit != 2){
	
			if(scan == 1){
			
				printf("\n    Coloca el primer numero.\n");
				scanf("%f", &a);
				printf("\n    Coloca el segundo numero.\n");
				scanf("%f", &b);
				printf("\n    Coloca el tercer numero.\n");
				scanf("%f", &c);
			
				float op = a+b+c;
			
				if(op >=50 && op< 100){
					m = (a*b)/c;
					printf("\n    Se ha multiplicado %.2f por %.2f y luego dividido por %.2f ", a, b, c);
					printf("para un resultado de %.2f.\n", m);
					exit = 2;	
				} else if(op < 50){
					m = sqrt(op);
					printf("\n    Se ha sacado la raiz cuadrada de la suma de tus tres numeros (%.2f) ", op);
					printf("para un resultado de %.2f.\n", m);
					exit = 2;
				} else if(op == 100){
					printf("\n\n\n    Hubo un error en el programa.\n");
				}
		
			}else if(scan == 2) {
				
				printf("\n    Has salido del programa.\n\n");
				exit = 2;
				
			}else{
				printf("\n    Por favor, elija una opcion valida. \n\n");
			}
			fflush(stdin);
		
		}
	
	}
	
}

