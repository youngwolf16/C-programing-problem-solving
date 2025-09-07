/*
Example

input: 
 test case

output: 
 testcase

input: 
 program mable

output: 
 programmable
*/

#include<stdio.h>

int main()
{
    char str1[10], str2[10], str3[20];
    int length;
    
    scanf("%s%s", str1, str2);
    
    //Write your code here
    for(int i=0;str1[i]!='\0';i++)
    {
        str3[length] = str1[i];
        length++;
    }
    
    for(int i=0;str2[i]!='\0';i++)
    {
        str3[length] = str2[i];
        length++;
    }
    
    for(int i=0;i<length;i++)
    {
        printf("%c",str3[i]);
    }
    
    
    return 0;
}
    