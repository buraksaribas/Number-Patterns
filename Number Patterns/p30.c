/*
	1        1
	12      21
	123    321
	1234  4321
	1234554321
*/

#include <stdio.h>

int main()
{
	int i,j,k;
	
	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= i; j++)
			printf("%d", j);
		
		for(j = i + 1; j <= 10 - i; j++)
			printf(" ");
		
		for(k = i; k > 0; k--)
			printf("%d",k);
			
		printf("\n");
	}
	
	return 0;
}
