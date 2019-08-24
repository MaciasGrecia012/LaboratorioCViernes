//Actividad 1
#include <stdio.h>
#include <stdlib.h>
int main(){
	//inicializacion de las variables tipo flotanrtes y etero
	int x;
	float y, z;
	//pedido en pantalla al usuario de introducir un numero del 0 al 10
	printf("\tIntroduzca un numero del 0 al 10:");
	//captura del numero que a introducido el usuario en la variable de tipo entero
	scanf("%d", &x);
	//muestra en pantalla las dos operaciones algebraicas que se van a realizar
	printf("\n\tx-1/4 - x-5/36");
	printf("\n\t6*(x+1/8 - 2*x-3/16)");
	//muestra en pantalla las dos operaciones algebraicas qu se van a realizar ya con el numero que a introducido el usuario
	printf("\n\t%d-1/4 - %d-5/36", x, x);
	printf("\n\t6*(%d+1/8 - 2*%d-3/16)", x, x);
	//realizacion de las operaciones algebraicas 
	y=((x-1)/4)-((x-5)/36);
	z=6*(((x+1)/8)-((2*x-3)/16));
	//muestra en pantalla de los resultados optenidos de ambas operaciones 
	printf("\n\tEl resultado de la primera operacion es: %f", y);
	printf("\n\tEl resultado de ña segunda operacion es: %f", z);
	return 0;
}
