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
	typedef struct Panda {      
	char *nombrep;      
	float peso;      
	int anyonac;     
	 char sexo;  

		}mip; 
		void LeerPanda(mip *p); 
		int EdadPanda(mip p); //devuelve la edad int TenerBebes(mip p); //devuelve 1 si puede tener bebes y 0 si no.
		void main() {     
	 int mip *mp; 
			int puede;      
			LeerPanda(&mp);      
			puede=TenerBebes(mp);
					 
					void LeerPanda(mip *p) {     
					 char nom[35];     
					 printf("'n\tIngrese el nombre del panda' ");  //pide al usuario por pantalla que ingrese el nombre del panda    
					gets(nom);    //captura el nombre ingresado 
					p->nombrep=(char *)malloc(sizeof(char) * strlen(nom)+1);      
					if(p==NULL){            
					printf("\n\tInsuficiente espacio de memoria");    //muestra por pantalla que no hay suficiente espacio de memoria   
					 exit(1);      
						}      
						strcpy(p->nombrep,nom);      
						fflush(stdin);     //limpia la variable 
						printf("\n\tIngrese el peso del panda:");   //pide al usuario por pantalla que ingrese el peso del panda    
						 scanf("%f",&p->peso);  //captura el peso ingresado     
							fflush(stdin);      //limpia la variable
							printf("\n\tingrese el año de nacimiento ");   //pide al usuario por pantalla que ingrese el año de nacimiento del panda  
			 scanf("%d",&p->anyonac);     //captura el año ingresado 
				 fflush(stdin); //limpia la variable     
					printf("\n\tIngrese el sexo del panda:"); //pide al usuario por pantalla que ingrese el sexo del panda 
					 scanf("%c",&p->sexo); //captura el sexo ingresado 
						} 
						int EdadPanda(mip p) //devuelve la edad
						{      
						int edadp;     
						 edadp=2012 - p.anyonac;      
							return(edadp); 
							} int TenerBebes(mip p) //devuelve 1 si puede tener bebes y 0 si no. 
						      
						int res,edad;     
						 edad=EdadPanda(p);     
							 if(edad>=5 && (p.sexo=='f' || p.sexo=='F'))            
								res=1;     
								 else            
									res=0; 
									if(res==1)           
			      printf("\n\tEl panda %s puede tener bebes",mp.nombrep);     //muestra por pantalla que el panda puede tener bebes
				      else                    
					     printf("'n\t'El panda %s no puede tener bebes",mp.nombrep); //muestra por pantalla que el panda no puede tener bebes     
									return(res); 
}
	

	


