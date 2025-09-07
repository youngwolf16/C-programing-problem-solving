/*
Example

input: 
 4 4

output: 
 Equal

input: 
 0 0

output: 
 Equal
*/

#include<stdio.h>

int main()
{
	int num1, num2;

	scanf("%d%d", &num1,&num2);

	//Write your code here
	
	/*if(num1 == num2)
	{
	    printf("Equal");
	}
	else{
	    printf("Unequal");
	}*/
	
	if(num1^num2 == 0)
	{
	    printf("Equal");
	}
	else{
	    printf("Unequal");
	}


	return 0;
}