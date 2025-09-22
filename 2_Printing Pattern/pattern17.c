/*

n = 5

        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
  4 3 2 1 2 3 4
    3 2 1 2 3
      2 1 2
        1

*/

#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d", &num);
    
    for(int i =1;i<=2*num-1;i++)
    {
        //int space = i<=num?num-i:i-num;
        
         int logic = i<=num?i:2*num-i;
         
         int space = num - logic;
        
        for(int j=1;j<=space;j++)
        {
            printf("  ");
        }
        
       
        
        for(int k=logic;k>=1;k--)
        {
            printf("%d ",k);
        }
        
        for(int l=2;l<=logic;l++)
        {
             printf("%d ",l);
        }
        
        printf("\n");
    }

    return 0;
}
