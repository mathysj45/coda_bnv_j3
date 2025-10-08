#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("écrit un nombre différent de 0\n");
	int number;
	scanf("%d", &number);
	int count = 0;
	while(count != number)
	{
	printf("%d\n", count);
	count++;
	}
	exit(0);
}
