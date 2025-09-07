/*
Example

input: 
 12

output: 
 2 1

input: 
 123

output: 
 3 2 1
*/

#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    //Write your code here
    int rem ;
    while(num>0){
        rem = num%10;
        printf("%d",rem);
        num = num/10;
    }

    return 0;
}