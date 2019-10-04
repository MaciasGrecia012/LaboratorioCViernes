//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 4/10/2019 grupo #006
//Practica 9
//Actividad 1
#include <stdio.h>
#include <time.h>
int main(){
	 //Inicializacion del arreglo tridimencional de tipo entero
int VEOE[6][10][2];
//inicializacion de las variables tipo enteras
int i, j, k, a; 
//ciclo para el llenado y la impresion  de la matriz
for(i=0; i<6; i++){ 
//ciclo para el llenado y la impresion de la matriz
	for(j=0; j<10; j++){  
	//ciclo para el llenado y la impresion de la matriz	
		for(k=0; k<2; k++){  
		//Llenado de la matriz de manera random
		 VEOE[i][j][k]=rand(); 
		 //llenado en una posicion especifica de la matriz
	 	VEOE[3][7][2]=4234; 
	 	//impresion de la matriz en cada una de sus pociciones junto a su valor
		printf("\n\tEl empleado numero %d de la oficina %d del edificio numero %d esta ha vendido %d unidades", i, j, k, VEOE[i][j][k]); 
	}
}
}
//Espacios para separar la actividad 1 de la 2
printf("\n\n\n\n\n\n"); 
//actividad 2
//inicializacion de una nueva matriz en la que se le va a guardar los valores de la anterior incrementados
int nuev[6][10][2];  
//ciclo para el llenado y la impresion  de la matriz
for(i=0; i<6; i++){ 
//ciclo para el llenado y la impresion  de la matriz
	for(j=0; j<10; j++){ 
	//ciclo para el llenado y la impresion  de la matriz
		for(k=0; k<2; k++){
		 //Llenado de la nueva matriz con la matreiz anteriormente llenada de manera random sumandole  10
	 nuev[i][j][k]=VEOE[i][j][k]+10;
	 	//impresion de la matriz en cada una de sus pociciones y con su valor ya incrementado
  printf("\n\tEl empleado numero %d de la oficina %d del edificio numero %d esta ha vendido %d unidades", i, j, k, VEOE[i][j][k]);    
		}
	}
}
	return 0;
}
