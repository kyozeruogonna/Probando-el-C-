#include <stdio.h>

int main () {
	
	//Autor: Jhonatan Marcano
	
	struct vector {
		int par;
		int num[20];
} pares;
	pares.par = 0;

	printf ("    Esto es un vector que se lleno de numero pares, usando un registro. \n");
	for (int i = 0; i < 20; i++) {
		pares.num[i] = pares.par;
		printf ("    El pares.num[%d] se lleno con el numero %d \n", i, pares.par);
			pares.par += 2;	}
	for (int i = 0; i < 20; i++) {
		printf (" %d ", pares.num[i]);	}	}

