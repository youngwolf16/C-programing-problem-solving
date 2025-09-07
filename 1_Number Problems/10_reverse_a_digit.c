/*
You will be given a number 'num'. Your task is to find the reverse of 'num'.
Example

input: 
 451

output: 
 154

input: 
 300

output: 
 3
*/

#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    int ans = 0;
    while(num>0)
    {
        int rem = 0;
        rem = num % 10;
        ans = ans * 10 + rem;
        num = num / 10;
    }
    
    printf("%d",ans);
    
    return 0;
}
