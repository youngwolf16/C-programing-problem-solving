/*
Example

input: 
 abcde

output: 
 Not Palindrome

input: 
 radar

output: 
 Palindrome
*/

#include<stdio.h>

int main()
{
	char str[10],str2[10];
	scanf("%s", str);
    int size = 0,j=0;
    int count =0;
    int flag = 1;
    
	//Write your code here
	
	for(int i=0;str[i]!='\0';i++)
	{
	    size++;
	}
	
	//method 1
	
	/*
	
	for(int i=size-1;i>=0;i--)
	{
	    str2[j] = str[i];
	    j++;
	}
	
	str2[j] = '\0';
	
	for(int i=0;str[i]!='\0';i++)
	{
	    if(str[i]==str2[i])
	    {
	        count++;
	    }
	}
	
	if(count == size)
	{
	    printf("Palindrome");
	}
	else{
	    printf("Not Palindrome");
	}
	*/
	
	//method 2
	
	for(int i=0;i<size/2;i++)
	{
	    if(str[i]!=str[size-i-1])
	    {
	        flag = 0;
	    }
	}
	
	
	if(flag == 1)
	{
	    printf("Palindrome");
	}
	else{
	    printf("Not Palindrome");
	}
	
	return 0;
}