#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    //Write your code here
    
    N = (N*(N+1))/2;
    
    printf("%d",N);

    return 0;
}