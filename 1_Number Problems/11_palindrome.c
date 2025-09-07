/*
Example

input: 
 121

output: 
 Palindrome

input: 
 345

output: 
 Not Palindrome
*/
#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    
    int rev,rem,num1;
    
    num1 = num;
    
    while(num>0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    
    if(num1 == rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    

    return 0;
}
