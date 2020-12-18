/*
	1     1
 	 2   2 
  	  3 3  
   	   4   
  	  3 3  
 	 2   2 
	1     1
*/

#include <stdio.h>

int main()
{
	int i, j;
	for(i = 1; i <= 4; i++)
	{
		for(j = 1; j < 8; j++)
		{
			if(j == i || j == 8-i)
				printf("%d", i);
			else
				printf(" ");
		}
		printf("\n");
	}
	
	for(i = 3; i > 0; i--)
	{
		for(j = 1; j < 8; j++)
		{
			if(j == i || j == 8-i)
				printf("%d", i);
			else
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
