#include <stdio.h>

int main(){
	printf("\n    Seleccione la cantidad de personas.\n");
	int r = 0, altmin = 0, altmay = 0;
	float rr, temp = 0.0, altmed = 0.0;
	
	scanf("%d", &r);
	float alturas[r];
	
	printf("\n    Ahora ingrese la altura de las personas adultas, con sus debidos decimales.\n\n");
	
	for(int j = 0; j<r; j++){
		fflush(stdin);
		scanf("%f", &rr);
	
		if(rr < 1.35){
			printf("\n    Por favor, seleccione una altura mayor a 1.35 metros.\n");
			j--;
		} else  if(rr > 2.6){
			printf("\n    Por favor, seleccione una altura menor a 2.6 metros.\n");
			j--;
		} else {
			alturas[j] = rr;
			temp += rr;
		}
	}
	
	altmed = temp/(float)r;
	printf("\n La altura promedio es de %.2f\n", altmed);
	
	for(int i = 0; i<r; i++){
		if(alturas[i] < altmed){
			altmin++;
		}else{
			altmay++;
		}
	}
	
	printf("\n    Hay %d personas con una altura menor al promedio.\n", altmin);
	printf("\n    Hay %d personas con una altura mayor al promedio.\n", altmay);
	
}
