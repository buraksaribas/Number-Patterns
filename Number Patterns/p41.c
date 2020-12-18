/*
    11111
    0000
    111
    00
    1
*/

#include <stdio.h>

int main()
{
	int i,j;
	
	for(i=5; i >= 1; i--)
	{		
		for(j = 1; j <= i; j++)
		{
			if(i % 2 != 0)
				printf("%d", i % 2);
			else
				printf("%d", i % 2);
		}
	
		printf("\n");
	}
	
	return 0;
}
