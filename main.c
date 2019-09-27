//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 27/09/2019 grupo #006
//Practica 8
//Actividad 1
#include <stdio.h>
int main(){
int NC[24]; //Inicializacion del arreglo 
int R; //inicializacion de la variable de tipo entero
R=2; //Igualacion de la variable inicializada en el numero deseado
//Llenado del arreglo de manera manual y no introducido por el usuario
NC[0]=24; 
NC[1]=34;
NC[2]=45;
NC[3]=56;
NC[4]=45;
NC[5]=9;
NC[6]=3;
NC[7]=6;
NC[8]=4;
NC[9]=78;
NC[10]=58;
NC[11]=90;
NC[12]=43;
NC[13]=32;
NC[14]=89;
NC[15]=10;
NC[16]=1;
NC[17]=7;
NC[18]=5;
NC[19]=89;
NC[20]=67;
NC[21]=65;
NC[22]=78;
NC[23]=79;
//Llenado del arreglo en la posicion R en el numero deseado
NC[R]=57;
printf("\n\tLa hora es: %d", R); //Muestra por pantalla la hora la cual es R
 //Muestra en pantalla la hora R y los numeros de coches los cuales estan en el arreglo y en este caso en la posicion R
printf("\n\tEl numero de coches para la hora %d es: %d", R, NC[R]);
R=12; //Cambio del numero quqe guarda la variable
NC[R]=57; //LLenado del arreglo en la nueva posicion de R
printf("\n\tLa hora es: %d", R); //Muestra por pantalla la hora la cual es R
 //Muestra en pantalla la hora R y los numeros de coches los cuales estan en el arreglo y en este caso en la posicion R
printf("\n\tEl numero de coches para la hora %d es: %d", R, NC[R]);
printf("\n\n\n\n\n\n"); //imprime espacios para separar la actividad 1 de la 2

//Actividad 2
int a=8, b=4, r, nc[24]; //inicialisacion de las variables tipo enteras y el arreglo 
//Llenado del arreglo de manera manual y no introducido por el usuario
nc[0]=24;
nc[1]=34;
nc[2]=45;
nc[3]=56;
nc[4]=45;
nc[5]=9;
nc[6]=3;
nc[7]=6;
nc[8]=4;
nc[9]=78;
nc[10]=58;
nc[11]=90;
nc[12]=43;
nc[13]=32;
nc[14]=89;
nc[15]=10;
nc[16]=1;
nc[17]=7;
nc[18]=5;
nc[19]=89;
nc[20]=2;
nc[21]=8;
nc[22]=11;
nc[23]=12;
//Operacion matematica para dar la pocicion de r en el arreglo
r=a/b;
//LLenado del arreglo en la nueva posicion de R
nc[r]=57;
printf("\n\tLa hora es: %d", r);//Muestra por pantalla la hora la cual es r
//Muestra en pantalla la hora r y los numeros de coches los cuales estan en el arreglo y en este caso en la posicion r
printf("\n\tEl numero de coches para la hora %d es: %d", r, nc[r]);
	return 0;
}
