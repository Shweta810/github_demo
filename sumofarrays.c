#include <stdio.h>
int main()
{
    int i,arr1[5],arr2[5];
    int sumarr[5];
    printf("enter first element of array");
    for(i=0;i<5;i++)
   { scanf("%d",&arr1[i]);
   }
   printf("enter second element of array");
   for(i=0;i<5;i++)
   {
    scanf("%d",&arr2[i]);
   }
   for(i=0;i<5;i++)
    
  {  
    sumarr[i]=arr1[i]+arr2[i];
    printf("\nsum of the two arrays at index %d is:%d",i,sumarr[i]);
  }

}