/*
Example

input: 
 28

output: 
 Yes

input: 
 100

output: 
 No
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;

    scanf("%d", &n);

    //Write your code here
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    
    if(sum == n){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
