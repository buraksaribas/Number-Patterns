/*
	11111
	2222
	333
	22
	1 
*/

#include <stdio.h>

int main()
{
	int i, j;
	
	for(i = 1; i <= 5; i++)
	{
		for(j = 5; j >= i; j--)
		{
			if(i <= 3)
				printf("%d", i);
			else
				printf("%d", 6-i);
		}
		printf("\n");
	}
	
	return 0;
}
