/*
You will be given a string 'str'. Your task is to find the length of 'str' without using strlen() function and print it.
Example

input: 
 language

output: 
 8

input: 
 program

output: 
 7
*/

#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
	int i=0,count=0;

	//Write your code here
	
	while(str[i]!='\0'){
	    count++;
	    i++;
	}
	
	printf("%d",count);
	
	return 0;
}