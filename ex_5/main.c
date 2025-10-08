#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number;
	char symbol;
	int i;


	printf("Choisissez un symbole + (montant) ou - (descendant) : \n");
	scanf("%c", &symbol);

	printf("Choisissez un nombre entier différent de 0 : \n");
	scanf("%d", &number);



	if(symbol == '+')
	{
		i = 0;

		while(i <= number)
		{
			printf("%d\n", i);
			i = i + 1;
		}
	}
	else if(symbol == '-')
	{
		i = number;

		while(i >= 0)
		{
			printf("%d\n", i);
			i = i - 1;
		}
	}
	else
	{
		printf("Le symbole %c n'est pas reconnu\n", symbol);
	}

	return(0);

}
