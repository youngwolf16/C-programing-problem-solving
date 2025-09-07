/*
Example

input: 
 0 7

output: 
 64

input: 
 4 1

output: 
 5
*/

#include<stdio.h>

int main()
{
	int num, n;

	scanf("%d%d", &num,&n);

	//Write your code here
	
	num = num | (1<<(n-1));
	
	printf("%d",num);

	
	return 0;
}