#REVERSING AN ARRAY#
#include <stdio.h>

int main()
{
   int a[]={2,3,4,5,6,8,7,9};
   int i;
   for(i=7;i>=0;i--)
       printf("%d",a[i]);
   
}