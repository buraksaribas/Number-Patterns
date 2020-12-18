/*
	1 
	1 2 
	3 5 8 
	13 21 34 55 
	89 144 233 377 610
*/

#include <stdio.h>

int main()
{
	int i, j, a = 0, b = 0, c = 1;
	
	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d ",c);
			a = b;
			b = c;
			c = a + b;
		}
		printf("\n");
	}
	
	return 0;
}
