/*
You will be given two positive integers 'num' and 'n' . Your task is to toggle nth bit of 'num' using bitwise operators.
Example

input: 
 65 7

output: 
 1

input: 
 1 7

output: 
 65
*/

#include<stdio.h>

int main()
{
	int num, n;

	scanf("%d%d", &num, &n);

	//Write your code here
	num = num ^ (1<<(n-1));
	
	printf("%d",num);

	return 0;
}