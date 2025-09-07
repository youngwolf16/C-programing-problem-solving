/*
Example

input: 
 cake cake

output: 
 Yes

input: 
 god dog

output: 
 No
*/

#include<stdio.h>

int main()
{
    char str1[10], str2[10];
    scanf("%s%s", str1, str2);
    int i=0,count1=0,count2=0;
    //Write your code here
    
    while(str1[i]!='\0'){
        count1++;
        i++;
    }
    
    for(int i=0;str1[i]!='\0';i++)
    {
       
            if(str1[i]==str2[i])
            {
                count2++;
            }
        
    }
    
    if(count1==count2)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}