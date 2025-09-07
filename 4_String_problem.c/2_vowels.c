/*
You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it.
Example

input: 
 loop

output: 
 2

input: 
 fly

output: 
 0
*/

#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
    int count =0;
	//Write your code here
	
	for(int i=0;str[i]!='\0';i++)
	{
	    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	    {
	        count++;
	    }
	}
	
	printf("%d",count);

	return 0;
}