#include<stdio.h>

main()
 {
    int i,j;  
    

    for (i = 5; i >=5; i--) 
	{
        
        for (j = 0; j < 2 * (5 - i - 1); j++) 
		{
            printf(" ");
        }
        
        for (j = 1; j <= i + 1; j++)
		 {
            printf("%d ", j);
        }
        
        for (j = i; j > 0; j--)
		 {
            printf("%d ", j);
        }
        
        printf("\n"); 
    }

}
