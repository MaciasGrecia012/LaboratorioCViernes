
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	//Actividad 1
	int x, y; //Inicializacion de dos variables tipo enteras
	//Pedir al usuario por pantalla que ingrese dos numeros enteros diferentes 
	printf("\n\tIngrese un numero entero:"); 
 scanf("%d", &x); //Captura del primer numeero entero
 printf("\n\tIngrese un segundo numero entero:");
 scanf("%d", &y); //Captura del segundo numero entero
 if(x>y){ //Condicion en la cual se verifica si el primer numero es mayor que el segundo
	//Muestra en pantalla que el primer numero es mayor que el segundo numero 
 	printf("\n\tEl primer numero ingresado %d es mayor al segundo %d", x, y);
	}
	else//si la condicion no se cumple hacer el siguente if
	if(x<y){//Condicion en la cual se verifica si el segundo numero es mayor que el primero
	//Muestra en pantalla que el segubdo numero es mayor que el primer numero 
	printf("\n\tEl segundo numero ingresado %d es mayor al primero %d", y, x);
}

else{ //si la condicion no se cumple hacer lo siguente
	//Muestra en pantalla que el segubdo numero es mayor que el primer numero 
printf("\n\tLos numeros ingresados %d y %d son iguales", x, y);
}

//Actividad 2
int a=5, b=3, c=-12; //Inicializacion de las variables tipo enteras con numeros constantes
//Muestra en pantalla cuales son las constantes y sus umeros ingresados
printf("\n\n\n\n\tLas siguentes variables y sus constantes son: a=5, b=3 y c=-12");
//Primera condicion, entrara solo si esta es verdadera
if(a>3)
	 //Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	 printf("\n\tEl numero %d es mayor a 3", a); 
    
  //segunda condicion, entrara solo si esta es verdadera
if(a>c){
		 //Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	  printf("\n\tEl numero %d es mayor a %d ", a, c);
  }

//tercera condicion, entrara solo si esta es verdadera
if(b!=c)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	printf("\n\tEl numero %d y el numero %d son diferentes", b, c);

//Cuarta condicion, entrara solo si esta es verdadera
if(a==3)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	printf("\n\tEl numero %d es igual a 3", a);


//Quinta condicion, entrara solo si esta es verdadera
if(a*b==15)
	//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
printf("\n\tLa multiplicacion de  %d y %d es igual a 15", a, b);
	
	
	//Sexta condicion, entrara solo si esta es verdadera
	//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
if(c/b<a)
		printf("\n\tLa divicion de %d y %d es menor a %d", c, b, a);
	
	//septima condicion, entrara solo si esta es verdadera
if(c/b==-10)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
		printf("\n\tLa divicion de %d y %d es igual a -10", c, b);


	//octava condicion, entrara solo si esta es verdadera
if(a+b+c==5)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
		printf("\n\tLa suma de %d, %d y %d es igual a 5", a, b, c);
	
	//novena condicion, entrara solo si esta es verdadera
if(a+b==8 && a-b==2)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	 printf("\n\tla suma de %d y %d es igual a 8 ademas de la resta de %d y %d es igual a 2", a, b, a, b);


	//decima condicion, entrara solo si esta es verdadera 
if(a+b==8 || a-b==6 )
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
		printf("\n\tla suma de %d y %d es igual a 8 ademas de la resta de %d y %d es igual a 6", a, b, a, b);


	//decimoprimera condicion, entrara solo si esta es verdadera
	if(a>3 && b>3 && c<3)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
		printf("\n\tEl numero %d es mayor a 3, el numero %d es mayor a tres y el numero %c es menor a 3", a, b, c);
	
	
//Actividad Extra
int n, m, r; //Inicializacion de las variables tipo enteras 
//Muetra en plantalla que el usuario ingrese los enteros
printf("\n\n\n\n\tIngrese un numero entero:");
scanf("%d", &n); //CAptura de datos
printf("\n\tIngrese un numero entero:");
scanf("%d", &m); //Captura de datos
printf("\n\tIngrese un numero entero:");
scanf("%d", &r); //Captura de datos
//Primera condicion, entrara solo si esta es verdadera
if(n>3)
	 //Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	 printf("\n\tEl numero %d es mayor a 3", n); 
    
  //segunda condicion, entrara solo si esta es verdadera
if(n>r){
		 //Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	  printf("\n\tEl numero %d es mayor a %d ", n, r);
  }

//tercera condicion, entrara solo si esta es verdadera
if(m!=r)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	printf("\n\tEl numero %d y el numero %d son diferentes", m, r);

//Cuarta condicion, entrara solo si esta es verdadera
if(n==3)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	printf("\n\tEl numero %d es igual a 3", n);


//Quinta condicion, entrara solo si esta es verdadera
if(n*m==15)
	//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
printf("\n\tLa multiplicacion de  %d y %d es igual a 15", n, m);
	
	
	//Sexta condicion, entrara solo si esta es verdadera
	//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
if(r/m<n)
		printf("\n\tLa divicion de %d y %d es menor a %d", r, m, n);
	
	//septima condicion, entrara solo si esta es verdadera
if(r/m==-10)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
		printf("\n\tLa divicion de %d y %d es igual a -10", r, m);


	//octava condicion, entrara solo si esta es verdadera
if(n+m+r==5)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
		printf("\n\tLa suma de %d, %d y %d es igual a 5", n, m, r);
	
	//novena condicion, entrara solo si esta es verdadera
if(n+m==8 && n-m==2)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
	 printf("\n\tla suma de %d y %d es igual a 8 ademas de la resta de %d y %d es igual a 2", n, m, n, m);


	//decima condicion, entrara solo si esta es verdadera 
if(n+m==8 || n-m==6 )
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
		printf("\n\tla suma de %d y %d es igual a 8 ademas de la resta de %d y %d es igual a 6", n, m, n, m);


	//decimoprimera condicion, entrara solo si esta es verdadera
	if(n>3 && m>3 && r<3)
		//Mosrara a pantalla el numero y la codicion propuesta si esto es verdadero
		printf("\n\tEl numero %d es mayor a 3, el numero %d es mayor a tres y el numero %c es menor a 3", n, m, r);
	return 0;
}




