/*
You will be given a number 'num'. Your task is to print the absolute value of 'num'
Example

input: 
 6

output: 
 6

input: 
 -3

output: 
 3
*/

#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    if(num<0)
    {
        num = -num;
    }
    
    printf("%d",num);

    return 0;
}