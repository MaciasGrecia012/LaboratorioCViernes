//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 15/11/2019 grupo #006
//Practica 15
//Actividad 1

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char cadena[20];//Declaramos la variable para nuestra String
	FILE* fichero; //creamos el apuntador de tipo FILE
	fichero = fopen("Cadena.txt","r"); //abrimos nuestro archivo en modo de lectura
	fgets(cadena, 20, fichero); //con fgets obtenemos nuestro string
	strrev(cadena); //utilizando strrev(); invertimos la cadena
	fclose(fichero); //cerramos nuestro archivo
	
	FILE *fichero2; //creamos el apuntador para el archivo de salida
	fichero2 = fopen("archivo_alreves.txt", "w"); // lo abrimos en modo escritura
	fputs(cadena, fichero2); //insertamos nuestro string invertido al archivo
	
	fichero = fopen("Cadena.txt", "w+"); // Abrimos nuevamente nuestro primer archivo
	fseek(fichero, 0, SEEK_SET); //movemos el "cursor" al inicio del archivo
	fwrite("Procesado", 1, 10, fichero); //haciendo uso de la función fwrite
										 //sobreescribimos nuestro string
	
	
	fclose(fichero);//cerramos el primer archivo
	fclose(fichero2);//cerramos el segundo archivo
	
	return 0;
}


 

	


