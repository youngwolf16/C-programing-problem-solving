/*
Example

input: 
 3

output: 
 *  *
  * 
*  *

input: 
 4

output: 
 *    *
  ** 
  ** 
*    *


*/

#include<stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    //Write your Code here
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||i+j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}