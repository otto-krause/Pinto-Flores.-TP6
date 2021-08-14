# incluye  < stdio.h >
# incluye  < stdlib.h >
int  main ()
{
	int dia;
	char ch;
	printf ( " Ingrese el dia de nacimiento: " );
	scanf ( " % d " , & dia);
	printf ( " Ingrese el mes de nacimiento: " );
	scanf ( " % d " , & ch);
	interruptor (ch)
	{
	caso  1 :
		si (dia < 21 ) {
		pone ( " Capricornio. " );
		}
		else {
		pone ( " Acuario. " );
		}
        romper ;
	caso  2 :
		si (dia < 20 ) {
			pone ( " Acuario " );
		}
		else {
			pone ( " Piscis " );
		}
		romper ;
	caso  3 :
		si (dia < 21 ) {
			pone ( " Piscis. " );
		}
		else {
			pone ( " Aries. " );
		}
		romper ;
	caso  4 :
		si (dia < 21 ) {
			pone ( " Aries. " );
		}
		else {
			pone ( " Tauro. " );
		}
		romper ;
	caso  5 :
		si (dia < 21 ) {
			pone ( " Tauro. " );
		}
		else {
			pone ( " Géminis. " );
		}
		romper ;
	caso  6 :
		si (dia < 22 ) {
			pone ( " Géminis. " );
		}
		else {
			pone ( " Cáncer. " );
		}
		romper ;
	caso  7 :
		si (dia < 23 ) {
			pone ( " Cáncer. " );
		}
		else {
			pone ( " Leo. " );
		}
		romper ;
	caso  8 :
		si (dia < 24 ) {
			pone ( " Leo. " );
		}
		else {
			pone ( " Virgo. " );
		}
		romper ;
	caso  9 :
		si (dia < 23 ) {
			pone ( " Virgo. " );
		}
		else {
			pone ( " Libra. " );
		}
		romper ;
	caso  10 :
		si (dia < 23 ) {
			pone ( " Libra. " );
		}
		else {
			pone ( " Escorpio. " );
		}
		romper ;
	caso  11 :
		si (dia < 23 ) {
			pone ( " Escorpio. " );
		}
		else {
			pone ( " Sagitario. " );
		}
		romper ;
	caso  12 :
		si (dia < 22 ) {
			pone ( " Sagitario. " );
		}
		else {
			pone ( " Capricornio. " );
		}
		romper ;
	por defecto :
		put ( " Error " );
	}
	sistema ( " pausa " );

}
