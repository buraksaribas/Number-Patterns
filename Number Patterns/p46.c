/*
	*000*000*
	0*00*00*0
	00*0*0*00
	000***000
*/
 
#include <stdio.h>

int main()
{
	int i, j, k;
	
	for(i = 1; i <= 4; i++)
	{		
		for(j = 1; j <= 9; j++)
		{
			if(j == i || j == 5 || j == 10 - i)
				printf("*");
			else
				printf("0");
		}
		
		printf("\n");
	}
	
	return 0;
}
