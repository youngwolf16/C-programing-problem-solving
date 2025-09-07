/*
Example

input: 
 3 4

output: 
 4 3

input: 
 10 1

output: 
 1 10
*/

#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);

	//Write your code here

    a = a^b;
    b = a^b;
    a = a^b;



	printf("%d %d", a, b);
	
	return 0;
}