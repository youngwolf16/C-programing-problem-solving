/*
You will be given a string 'str'. Your task is to convert all uppercase letters to lowercase and all lowercase letters to uppercase and print it.
Example

input: 
 HEllO

output: 
 heLLo

input: 
 DRIVINg

output: 
 drivinG
*/

#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);

	//Write your code here
	for(int i=0;str[i]!='\0';i++)
	{
	    if(str[i]>64&&str[i]<91)
	    {
	        str[i]+=32;
	    }
	    else
	    {
	        str[i]-=32;
	    }
	}
	
		for(int i=0;str[i]!='\0';i++)
	    {
	        printf("%c",str[i]);
	    }
	
	
	return 0;
}