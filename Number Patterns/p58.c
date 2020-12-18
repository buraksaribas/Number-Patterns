/*	
	      1
    	2   2
  	  3       3
	4           4
  	  3       3
	    2   2
    	  1
*/

#include <stdio.h>

int main()
{
	int i, j,k;
	
	for(i = 1; i < 5; i++)
	{
		for(j = 4; j > i; j--)
			printf(" ");
		for(j = 1; j <= 2 * i; j++)
		{
			if(j == i || j == 2 * i - 1)
			{
				printf("%d", i);
				for(k = 1; k < 2 * i - 2; k++)
					printf(" ");
			}				
		}
		printf("\n");
	}
	
	for(i = 3; i > 0; i--)
	{
		for(j = 4; j > i; j--)
			printf(" ");
		for(j = 1; j <= 2 * i; j++)
		{
			if(j == i || j == 2 * i - 1)
			{
				printf("%d", i);
				for(k = 1; k < 2 * i - 2; k++)
					printf(" ");
			}				
		}
		printf("\n");
	}
	
	return 0;
}
