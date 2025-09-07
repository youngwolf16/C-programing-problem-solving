/*
You will be given a number 'num'. Your task is to find the sum of digits of 'num'.
Example

input: 
 12

output: 
 3

input: 
 345

output: 
 12
*/

#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    int sum=0;
    //Write your code here
    while(num>0){
        int rem=0;
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    
    printf("%d",sum);

    return 0;
}
