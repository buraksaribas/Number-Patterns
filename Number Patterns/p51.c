/*
	11111
	10001
	10001
	10001
	11111
*/

#include <stdio.h>

int main()
{
	int i, j;
	
	for(i = 1; i <= 5; i++)
	{
		for( j = 1; j <= 5; j++ )
		{
			if(i == 1 || j == 5 || i == 5 || j == 1)
				printf("1");
			else 
				printf("0");
		}
			printf("\n");
	}
	
	
	return 0;
}
