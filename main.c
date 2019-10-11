//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 11/10/2019 grupo #006
//Practica 10
//Actividad 1
#include <stdio.h>
#include <string.h>
int main(){
	 char palabra[50]; //inicializacion del arreglo tipo char
	int i, n, pol=1; //inicializacion de vaariables tipo entero y una bandera
	printf("\n\tEscriba una cadena:"); // pide por pantalla que el usuario ingrese una cadena de caracteres
	fflush(stdout); //limpia 
	gets(palabra); //captura la palabra que a introducido el usuario
	n=strlen(palabra)-1; //reduce en uno la longitud de la cadena que se a introducido y la guarda en una nueva variable
	for(i=0; i<strlen(palabra)/2; i++, n--){ //ciclo desde cero en el arreglo hasta que sea menor que la longitud de la palabra dividido en 2
	//muestra en pantalla que las letras  en el arreglo de la posicion que se encuentre en i sea igual a la letra de la posicion original
		printf("\n\t%c==%c", palabra[i], palabra[n]); 
		if(palabra[i]!=palabra[n]){ //si la cadena de la posicion i es diferente de la cadena inicial 
			pol=0; //cambia la vandera que se iniciializo al inicio
		}
	}
	switch(pol){ //casos para la vanbdera si a sido cambiada o no
		case 0:{ //en el caso de que la vandera valga cero
				printf("\n\tNo es un polidromo"); //muestra por pantalla que la cadena de caracteres introducida no es polidroma
			break;
		}
case 1:{ //en caso de que la vandera valga 1 (no ha sido cambiada)
	printf("\n\tEs un polidromo"); //muestra por pantalla que efectivamente la palabra es polidroma
	break;
}
printf("\n\n\n\n"); //espacios para separar la actividad uno de la dos
//Actividad 2
char array[10]; //inicializacion del arreglo tipo char
int i=26, a; //inicializacion de las variables tipo enteros
printf("\n\tIngrese una cadena:"); //pide por pantalla al usuario que ingrese una cadena de cararcteres
gets(array); //captura la cadena de caracteres
while(array[i]!='\0')
 swhitch()
}
do{
	
}
while(i!=0)
	return 0;
}
