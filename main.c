#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Entré un nombre entier.\n");
	int number;
	scanf("%d", &number);
	if(number == 42)
	{
	printf("%d est égal à 42\n", number);
	}
	else if(number > 42)
        {
        printf("%d est supérieur à 42\n", number);
        }
	else
        {
        printf("%d est inférieur à 42\n", number);
        }
	exit(0);
}
