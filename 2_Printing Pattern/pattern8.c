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
    int n;
    

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char l = 'A';
        for(int j=1;j<=n-i+1;j++)
        {
            printf("%c ",l);
            l = 65 + j;
        }
        

        printf("\n");
    }
    return 0;
}