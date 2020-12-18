/*
	1
	01
	101
	0101
*/

#include <stdio.h>

int main()
{
	int i, j;
	
	for(i = 1; i <= 4; i++)
	{
		for(j = i; j > 0; j--)
				printf("%d", j % 2);
				
		printf("\n");
	}
	
	return 0;
}
