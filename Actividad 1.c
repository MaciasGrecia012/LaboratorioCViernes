//Actividad 1
#include <stdio.h>
#include <math.h>
int main(){
	//inicializacion de las variables tipo flotanrtes y etero
	float x;
	float y, z;
	//pedido en pantalla al usuario de introducir un numero del 0 al 10
	printf("\tIntroduzca un numero del 0 al 10:");
	//captura del numero que a introducido el usuario en la variable de tipo entero
	scanf("%f", &x);
	printf("\n\t%d", x);
	//muestra en pantalla las dos operaciones algebraicas que se van a realizar
	printf("\n\tx-1/4 - x-5/36");
	printf("\n\t6*(x+1/8 - 2*x-3/16)");
	//muestra en pantalla las dos operaciones algebraicas qu se van a realizar ya con el numero que a introducido el usuario
	printf("\n\t%.2f-1/4 - %.2f-5/36", x, x);
	printf("\n\t6*(%.2f+1/8 - 2*%.2f-3/16)", x, x);
	//realizacion de las operaciones algebraicas 
	y= ((x-1)/4)-((x-5)/36);
	z= 6*(((x+1)/8)-((2*x-3)/16));
	//muestra en pantalla de los resultados optenidos de ambas operaciones 
	printf("\n\tEl resultado de la primera operacion es: %.2f", y);
	printf("\n\tEl resultado de la segunda operacion es: %.2f\n", z);

	return 0;
}
