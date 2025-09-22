/*

n = 5

        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/


#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d", &num);
    
    for(int i =1;i<=num;i++)
    {
        int space = num - i;
        for(int j=1;j<=space;j++)
        {
            printf("  ");
        }
        for(int k=i;k>=1;k--)
        {
            printf("%d ",k);
        }
        for(int l=2;l<=i;l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }

    return 0;
}
