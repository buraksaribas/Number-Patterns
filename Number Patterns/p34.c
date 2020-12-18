/*
	11
	12 13
	13 14 15
	14 15 16 17
*/

#include <stdio.h>

int main()
{
	int i,j,k=0;
	
	for(i=1; i <= 4; i++)
	{
		for(j=1; j <= i; j++)
		{
			printf("1%d ",k + j );
		}
		k++;
		printf("\n");
	}
	
	return 0;
}
