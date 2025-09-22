/*

n = 5

A B C D E 
  A B C D
    A B C
      A B
        A

*/

#include <stdio.h>

int main()
{
    //printf("Hello World");
    int num;
    scanf("%d",&num);
    
    
    for(int i=1;i<=num;i++)
    {
        char c = 'A';
        for(int j=1;j<=i-1;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=num-i+1;j++)
        {
            printf("%c ",c);
            c = c + 1;
        }
        printf("\n");
    }

    return 0;
}