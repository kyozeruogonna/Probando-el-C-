#include <stdio.h>

int main () {
	
	//Autor: Jhonatan Marcano
	
	struct llenado {
		int matriz[3][3];
		int a;
	} impar;
		impar.a = 0;
		printf ("\n    Esta es una matriz que tiene solo numeros impares, llamado desde un registro: \n\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			impar.a++;
			if (impar.a%2 == 0) {
				impar.a++;
				impar.matriz[i][j] = impar.a;
				printf ("\n    La impar.matriz[%d][%d] se lleno con el numero %d \n", i, j, impar.a);	} else {
				impar.matriz[i][j] = impar.a;
				printf ("\n    La impar.matriz[%d][%d] se lleno con el numero %d \n", i, j, impar.a);	}	}	}
	printf ("\n\n");
	for (int i = 0; i < 3; i++) {
		printf ("\t");
		for (int j = 0; j < 3; j++) {
		printf (" %d ", impar.matriz[i][j]);	}
		printf ("\n");	}
		}

