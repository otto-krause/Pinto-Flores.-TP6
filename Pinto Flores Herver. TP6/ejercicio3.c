# include  <stdio.h>
# include  <stdlib.h>
int  main ()
{
	char mes;
	int anio = 0 ;
	printf ( " Ingrese el numero de un mes y despues el año para saber si es bisiesto: " );
	scanf ( " % c " , & mes);
	scanf ( " % d " , & anio);
	int feb = 28 ;
	if (anio% 4 == 0 && (anio% 100 ! = 0 || anio% 400 ! = 0 )) {
	feb = 29 ;
	}
	cambiar (mes)
	{
	caso  ' 1 ' :
		pone ( " 31 " );
		romper ;
	caso  ' 2 ' :
		printf ( " % d " , feb);
		romper ;
	caso  ' 3 ' :
		pone ( " 31 " );
		romper ;
	caso  ' 4 ' :
		pone ( " 30 " );
		romper ;
	caso  ' 5 ' :
		pone ( " 31 " );
		romper ;
	caso  ' 6 ' :
		pone ( " 30 " );
		romper ;
	caso  ' 7 ' :
		pone ( " 31 " );
		romper ;
	caso  ' 8 ' :
		pone ( " 31 " );
		romper ;
	caso  ' 9 ' :
		pone ( " 30 " );
		romper ;
	caso  ' 10 ' :
		pone ( " 31 " );
		romper ;
	caso  ' 11 ' :
		pone ( " 30 " );
		romper ;
	caso  ' 12 ' :
		pone ( " 31 " );
		romper ;
	por defecto :
		put ( " Error " );
	}
	sistema ( " pausa " );

}
