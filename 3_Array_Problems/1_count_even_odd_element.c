/*
You will be given an integer array 'arr'. Your task is to print the count of even numbers and odd numbers in 'arr'.
Example

input: 
 3 1 2 3

output: 
 Even Number Count = 1
Odd Number Count = 2

input: 
 4 1 5 3 7

output: 
 Even Number Count = 0
Odd Number Count = 4
*/

#include <stdio.h>

int main()
{
    int size;
    int even = 0, odd =0;
    scanf("%d",&size);
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even= even+1;
        }
        else
        {
            odd = odd+1;
        }
    }
    
    printf("Even Number Count = %d\n",even);
    printf("Odd Number Count = %d\n",odd);
    
}