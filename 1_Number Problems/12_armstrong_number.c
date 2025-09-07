/*
Example

input: 
 153

output: 
 Armstrong number

input: 
 321

output: 
 Not Armstrong number
*/

#include<stdio.h>
int main()
{
    int num;

    scanf("%d", &num);

    //Write your code here
    int rem,sum,cube,num1;
    
    num1 = num;
    
    while(num>0)
    {
        rem = num %10;
        cube = rem*rem*rem;
        sum = sum + cube;
        num = num/10;
    }
    
    if(num1==sum){
        printf("Armstrong number");
    }
    else{
        printf("Not Armstrong number");
    }

    return 0;
}