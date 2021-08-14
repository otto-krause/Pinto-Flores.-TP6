#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	printf("Introduzca una nota: ");
	scanf("%c", &ch);
	switch(ch)
	{
    case 'a':
	case 'A':
		puts("Excelente.");
		break;

	case 'b':
	case 'B':
		puts("Buena.");
		break;

    case 'c':
	case 'C':
		puts("Regular.");
		break;

	case 'd':
	case 'D':
		puts("Suficiente.");
		break;

	case 'f':
	case 'F':
		puts("No Suficiente.");
		break;
	}
}
