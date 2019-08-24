//Actividad 2
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x; //inicialiciacion de la variable tipo entero
	float y, z; //Inicialiciacion de las variables tipo flotante para el resultado
	//pedir al usuario mediante la pantalla que ingrese un numero entre 1 y 10
	printf("\tIngrese un numero del 0 al 10:");
	scanf("%d", &x); //captura de datos que a introducido el usuario 
	//muestra en pantalla las dos operaciones que se estan haciendo
	printf("\n\t1/2*[x-(1-(x-2)/3)]+1");
	printf("\n\t2-[2*(1-x)-(x-3)/3]");
	//Muestra en pantalla las operaciones ya con el valor ingresado 
	printf("\n\t1/2[%d-(1-(%d-2)/3)]+1", x, x);
	printf("\n\t2-[2*(1-%d)-(%d-3)/3]", x, x);
	//operaciones algebraicas pedidas
	y=(1/2*(x-(1-(x-2)/3))+1); 
	z= 2-(2*(1-x)-(x-3)/3);
	//muestra en pantalla el resultado de la operacion algebraica que se a hecho primero
	printf("\n\tEl resultado de la primera operacion algebraica es: %f", y); 
	//muestra en pantalla el resultado de la segunda operacion algebraica
	printf("\n\tEl resultado de la segunda operacion algebraica es: %f", z);
	return 0;
}

