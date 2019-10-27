//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 25/10/2019 grupo #006
//Practica 11
//Actividad 1
#include <stdio.h>
 #include<string.h> 
	#include<conio.h> 
	#include<stdlib.h>
	 #define NN 5 
		typedef struct {   //inicializacion del struct     
  char  *nomEst;  // nombre estudiante       
	int edad;       //edad del estudiante
		char sexo;      //sexo del estudiante
	int *notas; //notas del estudiante
			} estudiante; //finalizacion del struct
	typedef struct { //inicializacion del segundo struct
		int numEst; //numero de estudiantes
		estudiante  *estu; //puntero que liga el anterior struct a este
		 *rest; 	//la resta del registro de notas
	}registroNotas; //fin de la estructura
	void main ( ) {       
		char nombre[30]; //inicializacion de la variable tipo char para los nombres
	 int  i,n,sumnot=0,indicemay=0;      //inicializacion de las variables tipo enteras
	 float prom,mayorp=0; //inicializacion de las variables tipo flotantes
	 printf ("\n\t%cCuantos estudiantes desea ingresar%c", 168, 63); //pregunta por pantalla cuantos alumnos desea ingresar
		scanf ("%d", &rest.numest);       //captura por pantalla lo que a ingresado el usuario
		rest.estu=(Estudiante *) malloc(rest.numest * sizeof(Estudiante)); //
		if(rest.estu==NULL){      //si la variable puesta es igual a nul entonces       
			printf("\n\tInsuficiente Espacio de Memoria"); //muestra por pantalla que no hay suficiente espacio
				exit(1);//sale de la funcion
		}
		 for(i=0; i<rest.numest; i++){ //desde i hasta la variable dada             
			printf ("\n\tIngrese el nombre del alumno %d: ",i+1);//pide por pantalla que se ingrese el nombre del estudiante   
			fflush(stdin); //limpia la variable
			gets(Nombre); //captura lo que a introducido el usuario
			rest.estu[i].nomest=(char *)malloc(sizeof (char) * (strlen(Nombre)+1));   
			strcpy (rest.estu[i].nomest, Nombre);             
			printf ("\n\tIngrese la edad del alumno %d: ",i+1);  //pide por pantalla que se ingrese la edad del estudiante             
			fflush(stdin);   //limpia la variable          
			scanf ("%d",&rest.estu[i].edad);    //captura lo que a introducido el usuario         
			printf ("\n\tIngrese el sexo del alumno %d: ", i+1);   //pide por pantalla que se ingrese el sexo del estudiante           
			 fflush(stdin);     //limpia la variable        
				scanf ("%c",&rest.estu[i].sexo); //captura lo que a introducido el usuario           
				rest.estu[i].notas=(int *)malloc(NN *sizeof(int));            
			 if(rest.estu[i].notas==NULL){ //si la vaiable es igual a null                   
				printf("\n\tInsuficiente Espacio de Memoria"); //muestra por pantalla que no hay suficiemte espacio en la memoria
				exitt(1); //sale de la funcion
				}             
				printf("\n\tLas 5 calificaciones del estudiante %d son",i+1);   //muestra or pantalla cuales son las calificaciones          
				sumnot=0;   //hace la sumatoria total igual a 0          
				prom=0;   //hace el promedio igual a 0
				 for(n=0;n<5;n++) {                  
					 printf("\n\tIngrese la nota %d",n+1, );  //pide por pantalla que el usuario ingrese las notas        
						scanf("%d",&rest.estu[i].notas[n]); //captura cada una de las notas y las guarda en un arreglo
				 sumnot+=rest.estu[i].notas[n];             //suma todas las notas i ngresadas
					 }             
						prom=sumnot/5; //calcula el promedio de las cinco calificaciones dadas
						if(prom>mayorp){ //si el promedio es mayor a la variable ya guardada                   
						indicemay=i; // hace el indice mayor igual a la posicion en que se encuentra
	     mayorp=prom; //iguala la variable con el promedio guardando el mayor
						}       
						} 
						printf("\n\tEl estudiante con mayor promedio es:%s",rest.estu[indicemay].nomest); //muestra por pantalla el nombre del estudiante con mayor promedio
						free(nomest); //termina el melloc
						free(estu);  //termina el melloc
						free(notas); //termina el melloc
						getche();
					system ("pause");
					return 0;
				}
				//Actividad 2
	
	
	

	


