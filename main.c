//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 20/09/2019 grupo #006
//Practica 7
//Actividad 1
#include <stdio.h>
#include <math.h>
int main(){
	int i, x, y, z; //Inicializacion de las variables
	for(i=0; i<10; i++){ //ciclo que repite desde un numero iniciado hasta la cantidad que se indica que se debe repetir
		printf("\n\tIngrese la calificacion del alumno:"); //muestra y pide por pantalla que el usuario ingrese una calificacion
		scanf("%d", &x); //captura la calificacion que el usuario a dado
		y+=x; //suma las calificaciones que a dado el usuario
	}
	 z=y/10; //da el promedio de las calificaciones dadas que ya han sido sumadas y las divide entre 10 que son el total de calificaciones que se han ingresado
		if(z>=7){ //si el promedio en total es mayor que 7 entonces se cumplrira la condicion
			printf("\n\tEl alumno esta Aprobado"); //muestra en pantalla al usuario que el alumno esta aprobado
		}
		else //si lo anterior no se cumple entonces hace lo sig
		printf("\n\tEl alumno esta reprobado"); //muestra en pantalla al usuario que el alumno esta reprobado 
	 printf("\n\n\n\n"); //espacios para que la actividad dos no se junte en la misma linea que la uno
	 
	//Actividad 2
	int j, b, c, d; //Iniciaizacion de las variables
	printf("\n\tIngrese un numero base:"); //muestra y pide por pantalla que el usuario ingrese un numero para la base
	scanf("%d", &b); //captura el numero que el usuario a dado
	printf("\n\tIngrese un numero  exponente:");  //muestra y pide por pantalla que el usuario ingrese un numero para el exponente
	scanf("%d", &c); //captura el numero que el usuario a dado
	for(j=0; j<c; j++){ //ciclo que repite desde un numero iniciado hasta la cantidad que se indica que se debe repetir
		d=pow(b,c); 
	}
	printf("\n\tEl resultado de %d elevado a %d es: %d", b, c, d); //muestra en pantalla la potencia calculada con los dos numeros dados
	return 0;
}
