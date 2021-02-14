#include <stdio.h>
#include <conio.h>
#include<iostream>

int main(int argc, char** argv) {
	
	//Autor: Marcano Jhonatan
	
	//Página de las preguntas: https://psicologiaymente.com/cultura/preguntas-trivial
	
	printf("    ------------------------------------------------------------------ \n");
	printf("    |                                                                | \n");
	printf("    |                   Bienvenido al Preguntatron                   | \n");
	printf("    |                                                                | \n");
	printf("    |  Elige cualquiera de las siguientes opciones para continuar    | \n");
	printf("    |                                                                | \n");
	printf("    |               1)Comenzar juego          2)Salir                | \n");
	printf("    |                                                                | \n");
	printf("    |               Escribe el numero y presione Enter               | \n");
	printf("    ------------------------------------------------------------------ \n");
	
	int opcion, correcto = 0, volver, exit = 0;
	
	
	
while(opcion !=2){
	
	scanf("%d", &opcion);
	
	if(opcion == 1){
		int resp;
		
		
		while(exit==0){
			
			if(opcion == 1 || volver == 1){
				
				printf("\n    Empecemos con la primera pregunta \n \n");
				printf("    Quien fue el primer presidente de Estados Unidos? \n");
				printf("    1)Thomas Jefferson          2)Abraham Lincoln \n");
				printf("    3)George Washington         4)John Kennedy \n");
	
				scanf("%d", &resp);
		
				if(resp == 3) {
					correcto++;
					printf("    Correcto, ahora tienes %d respuestas correctas \n", correcto);
					opcion = 2;
					system("Pause");
		
				}else if(resp == 1 || resp == 2 || resp == 4){
					
					printf("    Incorrecto, finalizaste el juego con %d respuestas correctas \n", correcto);
					exit=1;
				
				}else {
				
					printf("    Por favor, elige una opcion valida. \n");
					system("Pause");
					volver = 1;
				
				}
			} //cierre opcion 1
			
			if(opcion == 2 || volver == 2){
				
				printf("\n    Empecemos con la segunda pregunta \n \n");
				printf("    Cuanto duro la guerra de los 100 anos? \n");
				printf("    1)100 anos         2)120 anos \n");
				printf("    3)96 anos          4)116 anos \n");
		
				scanf("%d", &resp);
		
				if(resp == 4) {
					correcto++;
					printf("    Correcto, ahora tienes %d respuestas correctas \n", correcto);
					opcion = 3;
					system("Pause");
		
				}else if(resp == 1 || resp == 2 || resp == 3){
					
					printf("    Incorrecto, finalizaste el juego con %d respuestas correctas \n", correcto);
					exit=1;
				
				}else {
				
					printf("    Por favor, elige una opcion valida. \n");
					system("Pause");
					volver = 2;
					
				}
			} //cierre opcion 2
			
			if(opcion == 3 || volver == 3){
				
				printf("\n    Empecemos con la tercera pregunta \n \n");
				printf("    Que carabela no volvio del viaje en el que Colon arribo a America por primera vez? \n");
				printf("    1)Santa Maria          2)La nina \n");
				printf("    3)La pinta             4)Santo Mario \n");
		
				scanf("%d", &resp);
		
				if(resp == 1) {
					correcto++;
					printf("    Correcto, ahora tienes %d respuestas correctas \n", correcto);
					opcion = 4;
					system("Pause");
		
				}else if(resp == 4 || resp == 2 || resp == 3){
					
					printf("    Incorrecto, finalizaste el juego con %d respuestas correctas \n", correcto);
					exit=1;
				
				}else {
				
					printf("    Por favor, elige una opcion valida. \n");
					system("Pause");
					volver = 3;
					
				}
			} //cierre opcion 3
			
			if(opcion == 4 || volver == 4){
				
				printf("\n    Empecemos con la cuarta pregunta \n \n");
				printf("    Quienes fueron, segun la leyenda, los dos hermanos fundadores de la ciudad de Roma? \n");
				printf("    1)Rena y Rana          2)Romulo y Remo \n");
				printf("    3)Remina y Roma        4)Roma y Rima \n");
		
				scanf("%d", &resp);
		
				if(resp == 2) {
					correcto++;
					printf("    Correcto, ahora tienes %d respuestas correctas \n", correcto);
					opcion = 5;
					system("Pause");
		
				}else if(resp == 4 || resp == 1 || resp == 3){
					
					printf("    Incorrecto, finalizaste el juego con %d respuestas correctas \n", correcto);
					exit=1;
				
				}else {
				
					printf("    Por favor, elige una opcion valida. \n");
					system("Pause");
					volver = 4;
					
				}
			} //cierre opcion 4
			
			if(opcion == 5 || volver == 5){
				
				printf("\n    Empecemos con la quinta pregunta \n \n");
				printf("    Cual es la lengua mas hablada del mundo? \n");
				printf("    1)Espanol          2)Ingles \n");
				printf("    3)Portugues        4)Chino mandarin \n");
		
				scanf("%d", &resp);
		
				if(resp == 4) {
					correcto++;
					printf("    Correcto, has terminado el juego con %d respuestas correctas, felicidades!! \n", correcto);
					exit=1;
					system("Pause");
		
				}else if(resp == 2 || resp == 1 || resp == 3){
					
					printf("    Incorrecto, finalizaste el juego con %d respuestas correctas \n", correcto);
					exit=1;
				
				}else {
				
					printf("    Por favor, elige una opcion valida. \n");
					system("Pause");
					volver = 5;
					
				}
			} //cierre opcion 5
			
		} //cierre del while
		opcion = 2;
	} else if(opcion == 2){
		printf("\n    Has salido del juego. \n");
	} else {
		printf("\n    Por favor, elige una opcion valida. \n");
		system("Pause");
	} //cierre if de inicio de juego
}
} //cierre del main
