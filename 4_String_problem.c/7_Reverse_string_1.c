/*

You will be given a string 'str'. Your task is to reverse 'str' and print it.
Example

input: 
 flipkart

output: 
 trakpilf

input: 
 backdrop

output: 
 dordkcab

*/

#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s", str);
    char str2[10];
    int count = 0, j = 0;

    // Count the length of the string
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    // Reverse the string
    for(int i = count - 1; i >= 0; i--)
    {
        str2[j] = str[i];
        j++;
    }

    str2[j] = '\0';  // Null terminate the reversed string

    printf("%s\n", str2);  // Print the reversed string

    return 0;
}