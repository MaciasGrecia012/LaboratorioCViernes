//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 25/10/2019 grupo #006
//Practica 12
//Actividad 1
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int num, prim, i, x; //inicializacion de las variables de tipo entero
	 printf("\n\tIngrese un numero mayor que 0 y entero:"); //pide por pantalla qeu el usuario ingrese un numero entero y mayor a 0
	scanf("%d", &num);//captura el numero introducido por el usuario
	if(num>=0){ //si el numero es mayo a 0 entonces hara lo siguiente
 for(i=2;i<=num;i++) {//repite desde i hasta el numero
 prim=num%i; //guarda en una variable el residuo
 if(prim==0){ //si el residuo que se gaurdo anteriormente es 0
	  x++; //inclrementa un contador para los dos numeros divisibles de la variable
			}//guarda el residuo de el numero introducido y el numero en el que se encuentra el ciclo
		}
  if(x==2) {//si el residuo que se gaurdo anteriormente es 0
  printf("\n\tEl numero es primo"); //muestra por pantalla que el numero es primo
 }
 else
    printf("\n\tEl nnmero no es primo"); //muestra por pantalla que ese numero no es primo
  }
else  //si no es mayor a 0 
printf("\n\tNumero no valido"); //muestra por pantalla al usuario que el numero introducido no esta en el rango autorizado
printf("\n\n\n\n"); //espacios para separar la actividad 1 de la 2
		//Actividad 2
		int num2, pot, num3; //inicializacion de las variables 
		fflush(stdout);
		printf("\n\tIngrese un nummero:"); //pide por pantalla al usuario que introduzca un numero
		scanf("%d", &num2); //captura el numero ingresado por el usuario
		printf("\n\tIngrese otro numero:"); //pide por pantalla que el usuario ingrese otro numero
		scanf("%d", &num3); //captrura el otro numero que a introducido el usuario
		if(num2>0){ //si el numero es mayor a 0
			pot=pow(num2,num3); //calcula el primer numero introducido elevado con el segundo numero
			printf("\n\tEl numero %d elevado a %d es: %d\n", num2, num3, pot); //muestra por pantalla los dos numeros introducidos por el usuario y la potencia calculada
		}
		else //si no es mayor a 0
		printf("\n\tEl numero no es valido\n"); //muestra por pantalla que el numero no esta en el rango puesto
		system("pause");
	return 0;
}
