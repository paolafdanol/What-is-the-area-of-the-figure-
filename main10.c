#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int opcion;
	printf("Elije la opcion:\n1Area Rectangulo\n2Area Cuadrado\n3Area Circulo\n");
	scanf("%d",&opcion);
	
	switch(opcion){
	float a;
	float b;
	float r;
	float result;
	
	case 1:
		printf("Area Rectangulo\n");
		printf("Altura:");
		scanf("%f", &a);
		printf("Base:");
		scanf("%f", &b);
		result=b*a;
		printf("El Area de tu Rectangulo es:%f\n", result);
		break;
		
	case 2:
		printf("Area Cuadrado\n");
		printf("Altura:");
		scanf("%f",&a);
		printf("Base:");
		scanf("%f", &b);
		result=b*a;
		printf("El Area de tu Cuadrado es:%f\n", result);
		break;
	
	case 3:
		printf("Area Circulo\n");
		printf("Radio:");
		scanf("%f", &r);
		result=(r*r)*3.1416;
		printf("El Area de tu Circulo es:%f\n", result);
		break;
	}
	return 0;
}
