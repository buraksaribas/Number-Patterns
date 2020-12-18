/*
	0 
	909 
	89098 
	7890987 
	678909876 
	56789098765 
	4567890987654 
	345678909876543 
	23456789098765432 
	1234567890987654321
*/

#include <stdio.h>

int main()
{
	int i, j;
	
	for(i = 10; i > 0; i--)
	{
		for(j = i; j <= 10; j++)
		{
			if(j == 10)
				printf("");
			else
				printf("%d", j);
		}
		for(j = 10 ; j >= i; j--)
		{
			if(j == 10)
				printf("0");
			else
				printf("%d", j);
		}
			
		printf("\n");
	}
	
	return 0;
}
