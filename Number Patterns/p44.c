/*
	    1 
   	   1 2 
  	  1 2 3 
 	 1 2 3 4 
	1 2 3 4 5
*/

#include <stdio.h>

int main()
{
	int i,j,k;
	
	for(i=5; i >= 1; i--)
	{		
		k=1;
			
		for(j = 1; j <= 5; j++)
		{
			if(i > j)
				printf(" ");
			else
				printf("%d ",k++);
		}
		
		printf("\n");
	}
	
	return 0;
}
