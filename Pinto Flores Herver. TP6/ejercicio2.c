#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int ch;
	printf("Introduzca el numero del mes: ");
	scanf ("%c", &ch);
	switch (ch)
	{
		case '1':
		case '3':
		case '7':
		case '8':
		case '9':
		case '12':
		puts("tiene 31 dias.");
		break;

	case '2':
	puts("tiene 28 dias.");
	break;

	case '4':
	case '5':
	case '6':
	case '10':
	case '11':
	puts("tiene 30 dias.");
	break;
}
}
