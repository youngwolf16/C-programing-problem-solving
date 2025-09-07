/*
Example

input: 
 5

output: 
 Prime number

input: 
 4

output: 
 Not Prime number
*/

#include<stdio.h>
int main()
{
    int num;

    scanf("%d", &num);

    //Write your code here
    
    int out=0;
    
    for(int i=2;i<num;i++){
        if(num%i==0){
            out = 1;
            break;
        }
    }
    
    if(out == 1){
        printf("Not Prime number");
    }
    else{
        printf("Prime number");
    }
    

    return 0;
}