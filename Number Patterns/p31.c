/*
	    1
	   21
	  321
	 4321
	54321   
*/

#include <stdio.h>

int main()
{
	int i, j, k;
	
	for(i = 1; i <= 5; i++)
	{
		k = i;
		for(j = 1; j <= 5 - i; j++)
			printf(" ");
		
		for(j = k; j > 0; j--)
			printf("%d", k--);

		printf("\n");
	}
	
	return 0;
}
