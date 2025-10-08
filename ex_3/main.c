#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("écrit un mot.\n");
	char str[100];
	scanf("%s", str);
	int count = 0;
	while(count < 5)
	{
	printf("%d : %s\n", count, str);
	count++;
	}
	exit(0);
}
