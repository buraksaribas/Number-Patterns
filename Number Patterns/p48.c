/*
	1
	1 1
	1 2 1
	1 3 3 1 
	1 4 6 4 1
*/

#include <stdio.h>

int main()
{
	int i, j, k;
	
	for(i = 0; i < 5; i++)
	{
		k = 1;
		for(j = 0; j <= i; j++)
		{
			printf("%d ", k);
			k = k * (i - j) / (j + 1);
			
		}
		printf("\n");
	}
	
	return 0;
}
