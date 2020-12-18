/*	
	1
	3 2
	4 5 6
	10 9 8 7
	11 12 13 14 15
*/

#include <stdio.h>

int main()
{
	int i, j, k = 1, l = 1;
	
	for(i = 1; i <= 5; i++)
	{
		if(i % 2 != 0)
		{
			for(j = 1; j <= i; j++)
				printf("%d",k);
		}
		else
		{
			for(j = 1; j <= i; j++)
				printf("%d",l++);
		}
		
		k++;
		printf("\n");
	}
	
	
	return 0;
}
