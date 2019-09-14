//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 13/09/2019
//Practica 6
//Actividad 1
#include <stdio.h>
int main(){
	//inicializacion de las variables
	int a, b; 
	char s;
	//se seguira haciendo esto hasta que el while sea falso
		do{
		printf("\n\tIngrese un numero entero:"); //muestra por pantalla que el usuario ingrese un numero entero
 	scanf("%d", &a); //captura la variable que a introducido el usuario
 	fflush(stdin); //limpia la variable siguiente ya que el al pomnerle enter se queda como caracter guardado de el siguiente dato a pedir
 	 b+=a; //hace la sumatoria de los numeros que a ingresado el usuario
 	printf("\n\t%cQuisiera ingresar otro numero%c: N-No S-Si:", 168, 63); //muestra por pantalla la pregunta al usuario para seguir continuando con el ciclo
		scanf("%c", &s);//captura la opcion del usuario para evaluarla y saber si continuara el ciclo o no
	}
		//Mientras esta evaluacion de la opcion que a ingresado el usuario se cumpla
	while(s=='S');

	printf("\n\tLa sumatoria es: %d", b);//muestra en pantalla la sumatoria de todos los numeros imgresdo por el usuario
printf("\n\n\n\n"); //espacios para mostrar la siguiente actividad hecha

//Actividad 2
//inicializacion de la variable
int i; 
//se seguira haciendo esto hasta que el while sea falso
do{
		fflush(stdin); //limpia la variable siguiente ya que el al pomnerle enter se queda como caracter guardado de el siguiente dato a pedir
printf("\n\tIngrese un numero:"); //muestra por pantalla que el usuario ingrese un numero 
scanf("%d", &i); //captura la variable que a introducido el usuario
	printf("\n\tEl numero que a introducido es: %d", i); //muestra en pantalla el numero introducido por el usuario
	}
	//Mientras la variable ingresada por el usuario sea menor al numero que se a puesto seguira repitiendo los mismos pasos
	while(i<100);
	//al teren un numero mayor al puesto en el while muestra en pantalla que el numero ingresado es mayor 
	printf("\n\tEl numero ingresado es mayor a 100");
printf("\n\n\n\n");  //espacios para mostrar la siguiente actividad hecha

//Acttividad 2.5
//inicializacion de la variable
int j; 
	fflush(stdin); //limpia la variable siguiente ya que el al pomnerle enter se queda como caracter guardado de el siguiente dato a pedir
printf("\n\tIngrese un numero:"); //muestra por pantalla que el usuario ingrese un numero 
scanf("%d", &j); //captura la variable que a introducido el usuario
//Mientras la variable ingresada por el usuario sea menor al numero que se a puesto seguira repitiendo los mismos pasos
while(j<100);{
fflush(stdin);
	 printf("\n\tIngrese un numero:"); //muestra por pantalla que el usuario ingrese un numero 
  scanf("%d", &j); //captura la variable que a introducido el usuario
	 printf("\n\tEl numero que a introducido es: %d", j); //muestra en pantalla el numero introducido por el usuario
}
//al teren un numero mayor al puesto en el while muestra en pantalla que el numero ingresado es mayor 
	printf("\n\tEl numero ingresado es mayor a 100");
printf("\n\n\n\n\n"); //espacios para mostrar la siguiente actividad hecha

	return 0;
}
