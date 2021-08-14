#include<stdio.h>
#include<stdlib.h>
void main ()
{
int ch;

	printf("Introduzca un numero del 1 al 7: ");
	scanf("%c" ,&ch);
	switch (ch)
	{
		case '1':
		puts("Lunes");
		break;

		case '2':
		puts("Martes");
		break;

		case '3':
		puts("Miercoles");
		break;

		case '4':
		puts("Jueves");
	    break;

		case '5':
		puts("Viernes");
		break;

		case '6':
		puts("Sabado");
		break;

		case '7':
        puts("Domingo");
        break;
	}
}
