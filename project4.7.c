#include <stdio.h>

main() 
{
    int i,j;


    for (i = 0; i <=5; i++)
	 {

        if (i == 0 || i == 2 || i == 4) 
		{
            for (j = 0; j < 5; j++) 
			{
                printf("* ");
            }
        } else if (i == 1)
		 {

            printf("*        *");
        } else 
		{

            printf("* ");
        }

        printf("\n");  
    }
}
