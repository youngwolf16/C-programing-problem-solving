/*

n = 5

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/

#include <stdio.h>

int main()
{
   int num =0;
   
   scanf("%d",&num);
   
   for(int i=1;i<=2*num-1;i++)
   {
       ///int space = i<=num?num-i:i-num;
       
       int star = i<=num?i:2*num-i;

       int space = num - star;
       
       //printf("%d",space);
       //printf("%d",star);
       
       for(int j=1;j<=space;j++)
       {
           printf(" ");
       }
        for(int k=1;k<=star;k++)
       {
           printf("* ");
       }
       
       printf("\n");
   }
   
   return 0;
}