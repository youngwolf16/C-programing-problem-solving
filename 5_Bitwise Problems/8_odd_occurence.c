/*
You will be given an array of integers 'arr'. All elements in the array will occur even number of times except one element which will occur odd number of time. Your task is to find that element occurring odd number of times and print it.
Example

input: 
 5 4 5 3 5 4

output: 
 3

input: 
 7 1 1 1 1 6 4 4

output: 
 6
*/

#include<stdio.h>

int main()
{
	int arr[10], size, i;

	scanf("%d", &size);

	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
    
    int result = arr[0];
    
	//Write your code here
	for(int i=1;i<size;i++)
	    result = result ^ arr[i];
    
    printf("%d",result);
    
	return 0;
}