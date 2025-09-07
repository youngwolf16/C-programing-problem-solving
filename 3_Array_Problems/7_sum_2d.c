/*
Example

input: 
 2 1 3 2 5

output: 
 11

input: 
 1 11

output: 
 11
*/

#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int arr[n][n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    //Write your code here
    int sum = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            sum += arr[i][j];
        }
    }
    
    printf("%d",sum);
    return 0;
}