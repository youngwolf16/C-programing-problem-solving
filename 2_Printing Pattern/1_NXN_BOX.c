/*
Example

input: 
 3

output: 
***
***
***

input: 
 4

output: 
****
****
****
****
*/

#include<stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    //Write your code here
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
