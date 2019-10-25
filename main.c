//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 11/10/2019 grupo #006
//Practica 10
//Actividad 1
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int num, prim, i, x; //inicializacion de las variables de tipo entero
	 printf("\n\tIngrese un numero mayor que 0 y entero:"); //pide por pantalla qeu el usuario ingrese un numero entero y mayor a 0
	 scanf("%d", &num);//captura el numero introducido por el usuario
	 if(num>0){
for(i=0;i<num;i++) //repite desde i hasta el numero
{
	prim=num%i; //guarda el residuo de el numero introducido y el numero en el que se encuentra el ciclo
  if(prim==0) //si el residuo que se gaurdo anteriormente es 0
   x++; //incremento de la variable x ya que esta nos ayudara a saber si es primo o no
}
if(x==2){ //si la variable aumentada es dos ya que solo puede tener dos divisores que es el 1 y el mismo
  printf("El número es primo"); //muestra por pantalla que el numero es primo
}
else //sino se cumple lo anterior
    printf("El número no es primo"); //muestra por pantalla que ese numero no es primo
}
else 
printf("\n\tNumero no valido");
printf("\n\n\n\n");
		//Actividad 2
		int num2, pot, num3; //inicializacion de las variables 
		printf("\n\tIngrese un nummero:"); //pide por pantalla al usuario que introduzca un numero
		scanf("%d", &num2); //captura el numero ingresado por el usuario
		printf("\n\tIngrese otro numero:"); //pide por pantalla que el usuario ingrese otro numero
		scanf("%d", &num3); //captrura el otro numero que a introducido el usuario
		if(num2>0){ //si el numero
			pot=pow(num2,num3);
			printf("\n\tEl numero %d elevado a %d es: %d", num2, num3, pot);
		}
		else
		printf("\n\tEl numero no es valido");
	return 0;
}
