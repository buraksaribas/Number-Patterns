/*
	5 5 5 5 5 5 5 5 5 
	5 4 4 4 4 4 4 4 5 
	5 4 3 3 3 3 3 4 5 
	5 4 3 2 2 2 3 4 5 
	5 4 3 2 1 2 3 4 5 
	5 4 3 2 2 2 3 4 5 
	5 4 3 3 3 3 3 4 5 
	5 4 4 4 4 4 4 4 5 
	5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>

int main()
{
	int i, j, k;
	
	for(i = 5; i >= 1; i--)
	{		
		for(j = 5; j >= 1; j--)
		{
			if(i <= j)
				printf("%d ", j);
			else
				printf("%d ", i);
		}
		
		for(j = 2; j <= 5; j++)
		{
			if(i <= j)
				printf("%d ", j);
			else
				printf("%d ", i);
		}
		
		printf("\n");
	}
	
	for(i = 2; i <= 5; i++)
	{	
		for(j = 5; j >= 1; j--)
		{
			if(i <= j)
				printf("%d ", j);
			else
				printf("%d ", i);
		}	
		for(j = 2; j <= 5; j++)
		{
			if(i <= j)
				printf("%d ", j);
			else
				printf("%d ", i);
		}	
	
		printf("\n");
	}
	
	return 0;
}
