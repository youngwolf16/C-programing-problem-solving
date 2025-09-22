/*

n = 5

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5

*/

#include <stdio.h>

int main()
{
    //printf("Hello World");
    int num;
    scanf("%d",&num);
    int n = 2 * num;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-1;j++)
        {
            int value =0; 
            
            int min1 = i < j ? i : j;
            int min2 = (n - i) < (n - j) ? (n - i) : (n - j);
            int min = min1 < min2 ? min1 : min2;
            int logic = num - min +1;
            
            printf("%d ", logic);
        }
        printf("\n");
    }
    

    return 0;
}