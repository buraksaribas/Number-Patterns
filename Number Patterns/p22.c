/*
	1
	123
	12345
	1234567
*/

#include <stdio.h>

int main()
{
	int i, j;
	
	for(i = 1; i <= 7; i += 2)
	{
		for(j = 1; j <= i; j++)
			printf("%d", j);
		
		printf("\n");
	}
	
	
	return 0;
}
