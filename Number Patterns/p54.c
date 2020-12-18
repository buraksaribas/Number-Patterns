/*
	1
	232
	34543
	4567654
	567898765 
*/

#include <stdio.h>

int main()
{
	int i, j, k;
	for(i = 1; i <= 5; i++)
	{
		k = i;
		for(j = 1; j < i * 2; j++)
		{
			if(j <= i )
				printf("%d", k++);
			else
				printf("%d", --k-1);
		}
		printf("\n");
	}
	
	return 0;
}
