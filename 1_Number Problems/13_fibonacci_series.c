/*
You will be given a positive integer 'n'. Your task is to print the first 'n' terms of the fibonacci series.
Example

input: 
 4

output: 
 0 1 1 2

input: 
 5

output: 
 0 1 1 2 3
*/
#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    //Write your code here
    int a=0, b=1, c=0;
    
    for(int i=0;i<n;i++)
    {
        printf("%d",a);
        c = a+b;
        a = b;
        b = c;
    }

    return 0;
}