#include <stdlib.h>
#include <stdio.h>

int main()
{
	char symbol;

	printf("Choisissez une opération : +, -, *, /, %% : \n");
	scanf("%c", &symbol);

	if(symbol == 43)
	{
		printf("Vous avez choisi d'effectuer une addition\n");
	}
	else if(symbol == 42)
	{
		printf("Vous avez choisi d'effectuer une multiplication\n");
	}
	else if(symbol == 45)
	{
		printf("Vous avez choisi d'effectuer une soustraction\n");
	}
	else if(symbol == 47)
	{
		printf("Vous avez choisi d'effectuer une division\n");
	}
	else if(symbol == 37)
	{
		printf("Vous avez choisi d'effectuer un modulo\n");
	}
	else
	{
		printf("L'opération %c n'existe pas\n", symbol);
	}

	return(0);
}
