/*
	1  2  3  4  5  
	16          6  
	15          7  
	14          8  
	13 12 11 10 9 
*/

#include <stdio.h>

int main()
{
	int i, j, a = 16, b = 6, c = 13;
	
	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <=5; j++)
		{
			if(i == 1)
				printf("%5d", j);
			else if(j == 5)
				printf("%5d", b++);
			else if(i == 5)
				printf("%5d", c--);
			else if(j == 1)
				printf("%5d", a--);
			else
				printf("     ");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
