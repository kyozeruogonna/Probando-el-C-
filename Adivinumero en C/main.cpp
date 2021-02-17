#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int rngod(int rngod);

int main(int argc, char** argv) {
	
	//Autor: Marcano Jhonatan
	
	printf("    ------------------------------------------------------------------ \n");
	printf("    |                                                                | \n");
	printf("    |                    Bienvenido al Adivinumero                   | \n");
	printf("    |                                                                | \n");
	printf("    |  Elige cualquiera de las siguientes opciones para continuar    | \n");
	printf("    |                                                                | \n");
	printf("    |               1)Comenzar juego          2)Salir                | \n");
	printf("    |                                                                | \n");
	printf("    |               Escribe el numero y presione Enter               | \n");
	printf("    ------------------------------------------------------------------ \n");
	
	int tiempoduracion = 0, error = 0, exit = 0;
	int opcion, rng, resp;
	time_t inicio, fin, delta;
	
	while(opcion !=2){
		
		scanf("%d", &opcion);
		
		if(opcion == 1){
			
			system("cls");
			
			printf("    ------------------------------------------------------------------ \n");
			printf("    |                                                                | \n");
			printf("    |      Tu computadora te ha retado a que adivines el numero      | \n");
			printf("    |                  que eligio entre el 1 y el 100                | \n");
			printf("    |                                                                | \n");
			printf("    |                      Tienes solo 10 intentos                   | \n");
			printf("    |                                                                | \n");
			printf("    ------------------------------------------------------------------ \n");
			
			system("Pause");
			
			rng = rngod(rng);
			inicio = time(NULL);
			
			while (exit == 0){
				
				scanf("%d", &resp);
				
				if (resp <= 0 || resp > 100){
					printf("\n    Elige un numero entre el 1 y el 100 \n");
				} else if(resp < rng){
					printf("\n    El numero %d es menor, intenta con un numero mas alto \n\n", resp);
					error++;
				} else if(resp > rng){
					printf("\n    El numero %d es mayor, intenta con un numero mas bajo \n\n", resp);
					error++;
				} else if( resp == rng){
					fin = time(NULL);
					delta = fin - inicio;
					printf("\n    Felicitaciones, adivinaste el numero !!! en %d segundos \n", delta);
					printf("\n    Tuviste %d errores \n", error);
					opcion = 2;
					exit = 1;
				} else {
					printf("\n    Por favor, elige un numero. \n");
				}
				
				if(error == 10){
					fin = time(NULL);
					delta = fin - inicio;
					printf("\n    Perdiste!! \t El numero era %d. \n", rng);
					printf("\n    Duraste %d segundos intentandolo. \n", delta);
					exit=1;
					system("Pause");
					opcion = 2;
				}
				
			} // Fin while exit
					
		}else if(opcion == 2){
			printf("\n    Has salido del juego. \n");
		}else{
			printf("    Por favor, elige una opcion valida.\n\n");
			
		} // fin if opcion
		
	} // fin while opcion
	
} // fin main

	// Inicio funcion Generar numero aleatorio
	
	int rngod(int rngod){
	
		srand(time(NULL));
		
		rngod = (rand()%100)+1;
		
		return rngod;
	}
	
	// Fin funcion Generar numero aleatorio
