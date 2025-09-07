/*
Example

input: 
 4

output: 
 10

input: 
 10

output: 
 55
*/

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    //Write your code here
    
    int sum =0;
    
    for(int i=1;i<=N;i++){
        sum = sum +i;
    }
    
    printf("%d",sum);

    return 0;
}