#include <stdio.h>

int main()
{
    //printf("Hello World");
    int num;
    scanf("%d",&num);
    
    
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        for(int l=i-1;l>=1;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }

    return 0;
}