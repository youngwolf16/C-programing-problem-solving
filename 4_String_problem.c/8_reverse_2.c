/*
Example

input: 
 queen

output: 
 neeuq

input: 
 knight

output: 
 thgink
*/

#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
    int size=0;
    char temp;
	//Write your code here
	
	for(int i=0;str[i]!='\0';i++)
	{
	    size++;
	}
	
	for(int i=0;i<size/2;i++)
	{
	    temp = str[i];
	    str[i] = str[size-i-1];
	    str[size-i-1] = temp;
	}
	
	printf("%s",str);

	return 0;
}