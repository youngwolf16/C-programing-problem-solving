/*
Example

input: 
 5 8 10 3 2 6

output: 
 Max = 10
Min = 2

input: 
 6 100 56 74 2 99 44

output: 
 Max = 100
Min = 2
*/

#include <stdio.h>

int main()
{
    int size,largest =0,smallest;
    scanf("%d",&size);
    int arr1[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    largest = arr1[0];
    smallest = arr1[0];
    for(int i=0;i<size;i++)
    {
        
       if(arr1[i]>largest)
       {
           largest = arr1[i];
       }
       else if(arr1[i]<smallest)
       {
           smallest = arr1[i];
       }
    }
    
    printf("Max = %d\n",largest);
    printf("Min = %d",smallest);
    
    
    
}