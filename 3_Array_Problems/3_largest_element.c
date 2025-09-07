/*

You will be given an integer array 'arr'. Your task is to print the largest element in 'arr'.
Example

input: 
 5 8 10 3 2 6

output: 
 Max = 10

input: 
 4 0 0 0 0

output: 
 Max = 0

*/

#include <stdio.h>

int main()
{
    int size,largest =0;
    scanf("%d",&size);
    int arr1[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    largest = arr1[0];
    
    for(int i=0;i<size;i++)
    {
        
       if(arr1[i]>largest)
       {
           largest = arr1[i];
       }
    }
    
    printf("Max = %d",largest);
    
    
    
}