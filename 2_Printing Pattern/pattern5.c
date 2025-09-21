/*

n = 5

* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*


*/


#include <stdio.h> 


int main()
{
    int n;

    scanf("%d",&n);

    for(int i=1;i<=2*n-1;i++)
    {
        
        int colinrow = i <=n ? i : 2*n-i;

        /*

        if(i<=n)
        {
            for(int j=1;j<=i;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int k=1;k<=2*n-i;k++)
            {
                printf("* ");
            }
        }

        */

        for(int j=1;j<=colinrow;j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}