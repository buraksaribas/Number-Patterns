/*
    1234
    2341
    3421
    4321
*/

#include <stdio.h>

int main()
{
	int i,j,k;
	
	for(i=1; i <= 4; i++)
	{	
		k = i;
			
		for(j = 4; j >= 1; j--)
		{
			
			if(k > 4)
				printf("%d",j);
			else
				printf("%d",k++);
			
		}
	
		printf("\n");
	}
	
	return 0;
}
