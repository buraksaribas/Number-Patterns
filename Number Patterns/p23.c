/*
	12344321
	123**321
	12****21
	1******1
*/

#include <stdio.h>

int main()
{
	int i, j, k = 4;
	
	for(i = 4; i >= 1; i--)
	{
		for(j = 1; j <= 4; j++)
		{
			if( j > i )
				printf("*");
			else
				printf("%d", j);
			k--;
		}
		for(j = 4; j >= 1; j--)
		{
			if(j > i)
				printf("*");
			else
				printf("%d", j);
		}
		
		printf("\n");
	}
	
	return 0;
}
