/*
   	    1       
      1 2 1     
    1 2 3 2 1   
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1
*/

#include <stdio.h>

int main()
{
	int i, j, k;
	
	for(i = 1; i <= 5; i++)
	{
		k = i;
		for(j = 5; j > i; j--)
			printf("  ");
		for(j = 1; j < 2 * i; j++)
		{
			if(i >= j)
				printf("%d ", j);
			else
			{
				printf("%d ", --k);
			}
		}
		printf("\n");
	}
	
	return 0;
}
