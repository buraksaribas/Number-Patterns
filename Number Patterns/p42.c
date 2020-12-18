/*
    			  1  
              4   9  16 
         25  36  49  64  81 
    100 121 144 169 196 225 256 
289 324 361 400 441 484 529 576 625
*/

#include <stdio.h>

int main()
{
	int i,j,k = 1;
	
	for(i=1; i <= 5; i++)
	{	
		for(j=1; j <= 5-i;j++)	
			printf("    ");
		
		for(j = 1; j <= 2*i-1; j++)
		{
				printf("%3d ", k * k);
				k++;
		}
		
		printf("\n");
	}
	
	return 0;
}
