//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 6/09/2019
//Practica 5
int main(){
	//Actividad 1
	int a; //Inicializacion de la  variable tipo entera
	printf("\n\tIngrese la calificacion del alumno del 0 al 10:"); //Pide por pantalla que el usuario introduzca una calificacion entre 0 y 10
	scanf("%d", &a); //Captura de la calificacion que el usuario a introducido
	if(a>=5 && a<=10){ //Si algunas de las condiciones dadas es verdadero entrara al if si es que la condicion que se encuentra dentro se cumple
		printf("\n\tEl alumno es APTO");//Muestra en pantalla que el alumno es apto 
	}
	else//si el anterior if no se cumple con la calificacion dada, hara lo siguiente
	if(a>=0 && a<5){//Si alguna de las condiciones dada es verdadero se hara lo que este dentro
	printf("\n\tEl alumno NO APTO");//Muestra en pantalla que el alumno no es apto 
}
else//si ninguna de las anteriores condiciones se cumple hara lo siguiente
printf("\n\tERROR: Nota incorrecta");//Muestra en pantalla que el numero ingresado no se encuentra en el rango



//Actividad 2
int b; //Inicializacion de la variable
printf("\n\n\n\tIngrese un dia de la semana:");//Pide al usuario que ingrese un dia de la semana
scanf("%d", &b);//Captura el dato que a ingresado el usuario
switch(b){//Evaluacion de los casos, si alguno de los datos dados se encuentran en los casos del comando este entrara
	case 1: {//Entrada al primer caso
		printf("\n\tEl dia de la semana que a ingresado es: Lunes");//Muestra en pantalla el primer dia de la semana
		break;//finalizacion del caso 1 (ya no entra a ningun otro caso
	}
case 2:{//Entrada al segundo caso
	printf("\n\tEl dia de la semana que a ingresado es: Martes");//Muestra en pantalla el segundo dia de la semana
	break;//Finalizacion del caso 2 (ya no entra a ningun otro caso)
}
case 3:{//Entrada al tercer caso
	printf("\n\tEl dia de la semana que a ingresado es: Miercoles");//Muestra en pantalla el tercer dia de la semana
	break;//Finalizacion del caso 3 (ya no entra a ningun otro caso)
}
case 4:{//Entrada al cuarto caso
	printf("\n\tEl dia de la semana que a ingresado es: Jueves");//Muestra en pantalla el cuarto dia de la semana
	break;//Finalizacion del caso 4 (ya no entra a ningun otro caso)
}
case 5:{//Entrada al quinto caso
	printf("\n\tEl dia de la semana que a ingresado es: Viernes");//Muestra en pantalla el quinto dia de la semana
	break;//Finalizacion del caso 5 (ya no entra a ningun otro caso)
}
case 6:{//Entrada al sexto caso
	printf("\n\tEl dia de la semana que a ingresado es: Sabado");//Muestra en pantalla el sexto dia de la semana
	break;//Finalizacion del caso 6 (ya no entra a ningun otro caso)
}
case 7:{ //Entrada al septimo caso
	printf("\n\tEl dia de la semana que a ingresado es: Domingo");//Muestra en pantalla el septimo dia de la semana
	break;//Finalizacion del caso 7 (ya no entra a ningun otro caso)
}
default://entra al no haber ningun caso que pueda ser evaluado con lo que a introducido el usuario
printf("\n\tERROR: Dia incorrecto");//Muestra en pantalla que el numero introducido en pantalla no es uno de la semana
}





//Actividad Extra
int c; //Inicializacion de la variable tipo entera
printf("\n\n\n\tIngrese una opcion:\n\t1\n\t2\n\t3\n\t4\n\t5\n\t");//Pide por teclado que ingrese alguna de las opciones
scanf("%d", &c);//Captura la opcion que a introducido el usuario
switch(c){//Evaluacion de los casos, si alguno de los datos dados se encuentran en los casos del comando este entrara
	case 1:{//Entrada al primer caso
		printf("\n\tUsted a ingresado la opcion 1");//Muestra en pantalla la opcion introducida por el usuario
		break;//Finalizacion del caso 1 (ya no entra a ningun otro caso)
	}
	case 2:{//Entrada al segundo caso
		printf("\n\tUsted a ingresado la opcion 2");//Muestra en pantalla la opcion introducida por el usuario
		break;//Finalizacion del caso 2 (ya no entra a ningun otro caso)
	}
	case 3:{//Entrada al tercer caso
		printf("\n\tUsted a ingresado la opcion 3");//Muestra en pantalla la opcion introducida por el usuario
		break;//Finalizacion del caso 3 (ya no entra a ningun otro caso)
	}
	case 4:{//Entrada al cuarto caso
		printf("\n\tUsted a ingresado la opcion 4");//Muestra en pantalla la opcion introducida por el usuario
		break;//Finalizacion del caso 4 (ya no entra a ningun otro caso)
	}
	case 5:{//Entrada al quinto caso
		printf("\n\tUsted a ingresado la opcion 5");//Muestra en pantalla la opcion introducida por el usuario
		break;//Finalizacion del caso 5 (ya no entra a ningun otro caso)
	}
}
	return 0;
}
