/*
Example

input: 
 5 4 6 2 1 3

output: 
 16

input: 
 4 10 20 30 40

output: 
 100
*/

#include <stdio.h>

int main()
{
    int size,sum = 0;
    float avg = 0;
    //printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    
    //printf("Enter the array elements: \n");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    
    avg = sum / (float)size;
    
    printf("%d",sum);
    //printf("Average: %f\n",avg);
    
}