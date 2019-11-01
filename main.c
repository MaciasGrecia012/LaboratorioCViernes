//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 25/10/2019 grupo #006
//Practica 13
//Actividad 1
#include <stdio.h>
#include <conio.h>
#include<ctype.h>
int contarVocales(char *cadena); //declara una variable entera con un apuntador en la cadena
int main(){
 char cadena1[1000]; //inicializacion de la cadena
 int vocal; //inicializacion de la variable entera que nos dira cuantas vocales hay
	printf("\n\tIngrese una cadena de caracteres:"); //pide al usuario que ingrese una cadena de caracteres
	gets(cadena1); //captura lo ingresado por el usuario
	vocal=contarVocales(cadena1); //iguala la variable vocal al puntero que se encuentra en la cadena ingresada 
	printf("\n\tEl numero de vocales que tiene la cadena es: %d", vocal);
	printf("\n\n\n\n\n\n"); //espacios para separar la actividad 1 de la 2
	//Actividad 2
	int a, b, c, d; //inicializacion de las variables
 int *p1, *p2; //inicializacion de los punteros
 printf("\n\tIngrese un valor"); //pide al usuario que ingrese un numero
 scanf("%d", &a); //captrura lo ingrsado por el usuario 
 printf("\n\tIngrese otro valor"); //pide por pantalla al usuario que ingrese otro numero
 scanf("%d", &b); //captura el numero ingresado por el usuario
 c=a+b; //sumatoria de los dos numeros ingresados
 printf("\n\tLa suma de los numeros es: %d", c); //muestra por pantalla ña suma de los numeros
 p1=&a; //iguala el puntero al numero guardado en el un espacio de memoria
 p2=&b; //iguala el puntero al numero guardado en el un espacio de memoria
 d= *p1+*p2; //suma de los dos apuntadores
 printf("\n\tLa suma de los apuntadores es: %d", d); // muestra en pantalla la suma de los apuntadores
 getch();
	return 0;
}
//parte de la actividad 1
int contarVocales(char *cadena){ // llama a la variable contarvocales con el puntero en char cadena
	int vocal, i; //inicializacion de las variables tipo enteras
	char letra; //inicializacion de la variable tipo char
	for (i = 0; cadena[i] != '\0'; ++i){ //ciclo que inicia en la posicion de la cadena mientras sea difernete a un cracter nulo
 letra = tolower(cadena[i]); //convierte la letra que haya introducido el usuario a minuscula y lo guarda en la variable letra

		if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){ //si alguna de las vocales se encuentran en lo que se a escrito
			vocal++; //contador para las vocales
		}
	}
	return vocal; //regresa la variable vocal
}


 

	


