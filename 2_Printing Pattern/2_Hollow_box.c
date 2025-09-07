/*
You will be given a positive number 'N'. Your task is to print a Hollow N x N box of stars.
Example

input: 
 3

output: 
 ***
*  *
***

input: 
 4

output: 
 ****
*   *
*   *
****
*/

#include<stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    //Write your code here
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
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