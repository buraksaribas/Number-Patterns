/*
	1
	232
	45654
	78910987   
*/

#include <stdio.h>

int main()
{
	int i, j, k = 1, l = 1;
  
  	for(i = 1; i <= 4; i++)
  	{
    	l = k;
    
	    for(j = 1; j <= i; j++)
    		printf("%d", l++);
      
    	k = l--;
    
    	for(j = 1; j < i; j++)
      		printf("%d",--l);
    	
		printf("\n");
  	} 
  	
	return 0;
}
