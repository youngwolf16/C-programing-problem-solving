/*
Example

input: 
 0

output: 
 Neither positive nor negative

input: 
 -3

output: 
 Negative
*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    if(num>0){
        printf("Positive");
    }
    else if(num==0){
        printf("Neither positive nor negative");
    }
    else{
        printf("Negative");
    }

    return 0;
}