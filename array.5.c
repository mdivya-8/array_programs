#EVEN AND ODD NUM WITH THEIR POSITIONS#
#include <stdio.h>

int main()
{
   int a[]={10,3,20,40,50,7};
   int i,n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n;i++){
       if(a[i]%2==0){
           printf("the even number and position is %d\n%d\n",a[i],i);
       }
       else if(a[i]%2!=0)
           printf("the odd num is and position is %d\n%d\n",a[i],i);
       
   }
}