/*
	11111
	2222
	333
	44
	5
*/

#include <stdio.h>

int main()
{
	int i, j;
	
	for(i = 1; i <= 5; i++)
	{
		for(j = 5; j >= i; j--)
			printf("%d", i);
			
		printf("\n");
	}
	
	return 0;
}
