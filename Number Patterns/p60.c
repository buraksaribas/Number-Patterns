/*	
	N=39714
		
	3 9 1 7 4
	9 1 7 4
	1 7 4
	7 4
	4
*/

#include <stdio.h>

int main()
{
	int i, j, n = 39714;
	
	for(i = 10000; i < n; i /= 10)
	{
		printf("%d\n",n);
		n %= i;
	}
		
	return 0;
}
