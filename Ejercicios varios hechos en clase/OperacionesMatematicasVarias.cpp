#include <stdio.h>

int factorial(int num1, int num2, int num3);
int multiplicar(int num1, int num2, int num3);
int dividir(int num1, int num2, int num3);

int main(){
	int a, b, c, resp;
	
	printf("\n    Seleccione su primer numero:\n");
	scanf("%d", &a);
	printf("\n    Seleccione su segundo numero:\n");
	scanf("%d", &b);
	printf("\n    Seleccione su tercer numero:\n");
	scanf("%d", &c);
	
	printf("\n    Elige que opcion quiere tomar: \n");
	printf("\n    Opcion 1: sumar los valores y sacar el factorial\n");
	printf("\n    Opcion 2: Multiplicar los tres valores, mostrar el resultado e indicar si el valor es mayor de 50\n");
	printf("\n    Opcion 3: Dividir el primer numero entre el tercero y multiplicarlo por el segundo\n");
	
	scanf("%d", &resp);
	
	switch(resp){
		case 1:
			factorial(a, b, c);
			break;
		case 2:
			multiplicar(a, b, c);
			break;
		case 3:
			dividir(a, b, c);
			break;
		default:
			printf("\n    No eligio una opcion valida. Se ha salido del programa.\n");
			break;
	}
}

int factorial(int num1, int num2, int num3){
	int sum = num1 + num2 + num3;
	
	if(sum < 12){
		printf("\n    La suma de sus numeros es %d\n", sum);
		int fact = 1;
	
		for(int i = 1; i <= sum; i++){
			fact *= i;
		}
	
		printf("\n    %d \n", fact);
	} else {
		printf("\n    Como la suma de sus numeros es %d, y es superior a 12 hay un error al calcular su factorial.\n", sum);
	}
	
}

int multiplicar(int num1, int num2, int num3){
	int mult = num1 *num2 *num3;
	
	printf("\n    La multiplicacion de sus numeros es de %d \n", mult);
	
	if(mult > 50){
		printf("\n    Ademas, su valor es mayor a 50\n ");
	}
}

int dividir(int num1, int num2, int num3){
	float a = num1;
	float b = num2;
	float c = num3;
	
	float div = (a/c);
	float mu = div * b;
	
	printf("\n    Se ha dividido %.2f entre %.2f, dando %.2f\n", a, c, div);
	printf("\n    Finalmente, se multiplico %.2f por %.2f, dando %.2f\n", div, b, mu);
}
