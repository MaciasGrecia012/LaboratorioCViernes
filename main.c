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
			printf("\n\tIngrese una cadena de caracteres:");
			gets(cadena1);
			vocal=contarVocales(cadena1);
			printf("\n\tEl numero de vocales que tiene la cadena es: %d", vocal);
			printf("\n\n\n\n\n\n"); 
			//Actividad 2
			int a, b, c, d;
   int *p1, *p2, ; 
   printf("\n\tIngrese un valor");
   scanf("%d", &a);
   printf("\n\tIngrese otro valor"); //
   scanf("%d", &b); //captura el numero ingresado por el usuario
   c=a+b; //sumatoria de los dos numeros ingresados
   printf("\n\tLa suma de los numeros es: %d", c);
   p1=&a; //
   p2=&b; //
   d= *p1+*p2; //suma de los dos apuntadores
   printf("\n\tLa suma de los apuntadores es: %d", d); //
getch();
	return 0;
}
int contarVocales(char *cadena){
	int vocal, i;
	char letra;
	for (i = 0; cadena[i] != '\0'; ++i){
 letra = tolower(cadena[i]);

		if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
			vocal++;
		}
	}
	return vocal;
}


 

	


