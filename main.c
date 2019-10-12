//Macias Zuñiga Grecia Sofia mat: 1852097 horario: viernes 7:00am - 9:00am 11/10/2019 grupo #006
//Practica 10
//Actividad 1
#include <stdio.h>
#include <string.h>
int main(){
	 char palabra[50]; //inicializacion del arreglo tipo char
	int il, num, pol=1; //inicializacion de vaariables tipo entero y una bandera
	printf("\n\tEscriba una cadena:"); // pide por pantalla que el usuario ingrese una cadena de caracteres
	fflush(stdout); //limpia la variable
	gets(palabra); //captura la palabra que a introducido el usuario
	num=strlen(palabra)-1; //reduce en uno la longitud de la cadena que se a introducido y la guarda en una nueva variable
	for(il=0; il<strlen(palabra)/2; il++, num--){ //ciclo desde cero en el arreglo hasta que sea menor que la longitud de la palabra dividido en 2
	//muestra en pantalla que las letras  en el arreglo de la posicion que se encuentre en i sea igual a la letra de la posicion original
	
		printf("\n\t%c==%c", palabra[il], palabra[num]); 
		if(palabra[il]!=palabra[num]){ //si la cadena de la posicion i es diferente de la cadena inicial 
			pol=0; //cambia la vandera que se iniciializo al inicio
		}
	}
	switch(pol){ //casos para la vanbdera si a sido cambiada o no
		case 0:{ //en el caso de que la vandera valga cero
				printf("\n\tNo es un polidromo"); //muestra por pantalla que la cadena de caracteres introducida no es polidroma
			break;
		}
case 1:{ //en caso de que la vandera valga 1 (no ha sido cambiada)
	printf("\n\tEs un polidromo"); //muestra por pantalla que efectivamente la palabra es polidroma
	break;
}
}
printf("\n\n\n\n"); //espacios para separar la actividad uno de la dos
//Actividad 2
char array[10]; //inicializacion del arreglo tipo char
int i, a, b, c, d, e, f, g, h, in, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z; //inicializacion de las variables tipo enteros
fflush(stdout); //limpia la variable 
printf("\n\tIngrese una cadena:"); //pide por pantalla al usuario que ingrese una cadena de cararcteres
gets(array); //captura la cadena de caracteres
while(array[i]!='\0'){ //ciclo en el cual se va a entar mientras no haya un caractr nulo (un espacio)
 if(array[i]=='a' && array[i]=='A'){ //pregunta si la posicion en la que se encuentra hay una letra a mayuscula o minuscula
	fflush(stdout); //limpia la variable
	a++; //aumenta un contador el cual nos dara el numero de letras a hay
 }
 if(array[i]=='b' && array[i]=='B'){ //pregunta si la posicion en la que se encuentra hay una letra b mayuscula o minuscula
	fflush(stdout); //limpia la variable
	b++;  //aumenta un contador el cual nos dara el numero de letras b hay
 }
 if(array[i]=='c' && array[i]=='C'){//pregunta si la posicion en la que se encuentra hay una letra c mayuscula o minuscula
	fflush(stdout); //limpia la variable
	c++;  //aumenta un contador el cual nos dara el numero de letras c hay
 }
 if(array[i]=='d' && array[i]=='D'){//pregunta si la posicion en la que se encuentra hay una letra d mayuscula o minuscula
	fflush(stdout); //limpia la variable
	d++;  //aumenta un contador el cual nos dara el numero de letras d hay
 }
 if(array[i]=='e' && array[i]=='E'){//pregunta si la posicion en la que se encuentra hay una letra e mayuscula o minuscula
	fflush(stdout); //limpia la variable
	e++;  //aumenta un contador el cual nos dara el numero de letras e hay
}
  if(array[i]=='f' && array[i]=='F'){//pregunta si la posicion en la que se encuentra hay una letra f mayuscula o minuscula
	fflush(stdout); //limpia la variable
	f++;  //aumenta un contador el cual nos dara el numero de letras f hay
 }
 if(array[i]=='g' && array[i]=='G'){ //pregunta si la posicion en la que se encuentra hay una letra g mayuscula o minuscula
	fflush(stdout); //limpia la variable
	g++;  //aumenta un contador el cual nos dara el numero de letras g hay
 }
 if(array[i]=='h' && array[i]=='H'){ //pregunta si la posicion en la que se encuentra hay una letra h mayuscula o minuscula
	fflush(stdout); //limpia la variable
	h++;  //aumenta un contador el cual nos dara el numero de letras h hay
}
if(array[i]=='i' && array[i]=='I'){ //pregunta si la posicion en la que se encuentra hay una letra i mayuscula o minuscula
	fflush(stdout); //limpia la variable
	in++;  //aumenta un contador el cual nos dara el numero de letras i hay
}
if(array[i]=='j' && array[i]=='J'){ //pregunta si la posicion en la que se encuentra hay una letra j mayuscula o minuscula
	fflush(stdout); //limpia la variable
	j++;  //aumenta un contador el cual nos dara el numero de letras j hay
}
if(array[i]=='k' && array[i]=='K'){ //pregunta si la posicion en la que se encuentra hay una letra k mayuscula o minuscula
	fflush(stdout); //limpia la variable
	k++;  //aumenta un contador el cual nos dara el numero de letrasn k hay
}
if(array[i]=='l' && array[i]=='L'){ //pregunta si la posicion en la que se encuentra hay una letra l mayuscula o minuscula
	fflush(stdout); //limpia la variable
	l++;  //aumenta un contador el cual nos dara el numero de letras l hay
}
if(array[i]=='m' && array[i]=='M'){ //pregunta si la posicion en la que se encuentra hay una letra m mayuscula o minuscula
	fflush(stdout); //limpia la variable
	m++;  //aumenta un contador el cual nos dara el numero de letras m hay
}
if(array[i]=='n' && array[i]=='N'){ //pregunta si la posicion en la que se encuentra hay una letra n mayuscula o minuscula
	fflush(stdout); //limpia la variable
	n++;  //aumenta un contador el cual nos dara el numero de letras n hay
}
if(array[i]=='o' && array[i]=='O'){ //pregunta si la posicion en la que se encuentra hay una letra o mayuscula o minuscula
	fflush(stdout); //limpia la variable
	o++;  //aumenta un contador el cual nos dara el numero de letras o hay
}
if(array[i]=='p' && array[i]=='P'){ //pregunta si la posicion en la que se encuentra hay una letra p mayuscula o minuscula
	fflush(stdout); //limpia la variable
	p++;  //aumenta un contador el cual nos dara el numero de letras p hay
}
if(array[i]=='q' && array[i]=='Q'){ //pregunta si la posicion en la que se encuentra hay una letra q mayuscula o minuscula
fflush(stdout); //limpia la variable
	q++;  //aumenta un contador el cual nos dara el numero de letras q hay
}
if(array[i]=='r' && array[i]=='R'){ //pregunta si la posicion en la que se encuentra hay una letra r mayuscula o minuscula
fflush(stdout); //limpia la variable
	r++;  //aumenta un contador el cual nos dara el numero de letras r hay
}
if(array[i]=='s' && array[i]=='S'){ //pregunta si la posicion en la que se encuentra hay una letra s mayuscula o minuscula
fflush(stdout); //limpia la variable
	s++;  //aumenta un contador el cual nos dara el numero de letras s hay
}
if(array[i]=='t' && array[i]=='T'){ //pregunta si la posicion en la que se encuentra hay una letra t mayuscula o minuscula
fflush(stdout); //limpia la variable
	t++;  //aumenta un contador el cual nos dara el numero de letras t hay
}
if(array[i]=='u' && array[i]=='U'){ //pregunta si la posicion en la que se encuentra hay una letra u mayuscula o minuscula
	fflush(stdout); //limpia la variable
	u++;  //aumenta un contador el cual nos dara el numero de letras u hay
}
if(array[i]=='v' && array[i]=='V'){ //pregunta si la posicion en la que se encuentra hay una letra v mayuscula o minuscula
fflush(stdout); //limpia la variable
	v++;  //aumenta un contador el cual nos dara el numero de letras v hay
} 
if(array[i]=='w' && array[i]=='W'){ //pregunta si la posicion en la que se encuentra hay una letra w mayuscula o minuscula
fflush(stdout); //limpia la variable
	w++;  //aumenta un contador el cual nos dara el numero de letras w hay
}
if(array[i]=='x' && array[i]=='X'){ //pregunta si la posicion en la que se encuentra hay una letra x mayuscula o minuscula
	fflush(stdout); //limpia la variable
	x++;  //aumenta un contador el cual nos dara el numero de letras x hay
}
if(array[i]=='y' && array[i]=='Y'){ //pregunta si la posicion en la que se encuentra hay una letra y mayuscula o minuscula
	fflush(stdout); //limpia la variable
	y++;  //aumenta un contador el cual nos dara el numero de letras y hay
}
if(array[i]=='z' && array[i]=='Z'){ //pregunta si la posicion en la que se encuentra hay una letra z mayuscula o minuscula
	fflush(stdout); //limpia la variable
	z++;  //aumenta un contador el cual nos dara el numero de letras z hay
}
i++; //controlador del ciclo
}
if(a!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras a se a utilizado %d", a); //muestra por pantalla el numero de veces que aparece la letra a
}
if(b!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras b se a utilizado %d", b); //muestra por pantalla el numero de veces que aparece la letra b
}
if(c!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras c se a utilizado %d", c); //muestra por pantalla el numero de veces que aparece la letra c
}
if(d!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras d se a utilizado %d", d); //muestra por pantalla el numero de veces que aparece la letra d
}
if(e!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras e se a utilizado %d", e); //muestra por pantalla el numero de veces que aparece la letra e
}
if(f!=0){//pregunta si la variable es diferente de cero
	printf("\n\tLa letras f se a utilizado %d", f); //muestra por pantalla el numero de veces que aparece la letra f
}
if(g!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras g se a utilizado %d", g); //muestra por pantalla el numero de veces que aparece la letra g
}
if(h!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras h se a utilizado %d", h); //muestra por pantalla el numero de veces que aparece la letra h
}
if(i!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras i se a utilizado %d", in); //muestra por pantalla el numero de veces que aparece la letra i
}
if(j!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras j se a utilizado %d", j); //muestra por pantalla el numero de veces que aparece la letra j
}
if(k!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras k se a utilizado %d", k);//muestra por pantalla el numero de veces que aparece la letra k
}
if(l!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras l se a utilizado %d", l); //muestra por pantalla el numero de veces que aparece la letra l
}
if(n!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras n se a utilizado %d", n); //muestra por pantalla el numero de veces que aparece la letra n
}
if(m!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras m se a utilizado %d", m); //muestra por pantalla el numero de veces que aparece la letra m
}
if(o!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras o se a utilizado %d", o); //muestra por pantalla el numero de veces que aparece la letra o
}
if(p!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras p se a utilizado %d", p); //muestra por pantalla el numero de veces que aparece la letra p
}
if(q!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras q se a utilizado %d", q); //muestra por pantalla el numero de veces que aparece la letra q
}
if(r!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras r se a utilizado %d", r); //muestra por pantalla el numero de veces que aparece la letra r
}
if(s!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras s se a utilizado %d", s); //muestra por pantalla el numero de veces que aparece la letra s
}
if(t!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras t se a utilizado %d", t); //muestra por pantalla el numero de veces que aparece la letra t
}
if(u!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras u se a utilizado %d", u); //muestra por pantalla el numero de veces que aparece la letra u
}
if(v!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras v se a utilizado %d", v); //muestra por pantalla el numero de veces que aparece la letra v
}
if(w!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras w se a utilizado %d", w);//muestra por pantalla el numero de veces que aparece la letra w
}
if(x!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras x se a utilizado %d", x); //muestra por pantalla el numero de veces que aparece la letra x
}
if(y!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras y se a utilizado %d", y); //muestra por pantalla el numero de veces que aparece la letra y
}
if(z!=0){ //pregunta si la variable es diferente de cero
	printf("\n\tLa letras z se a utilizado %d", z); //muestra por pantalla el numero de veces que aparece la letra z
}
	return 0;
}
