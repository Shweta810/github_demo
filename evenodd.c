#include <stdio.h>
void main()
{
    int a[10],i;
    int even=0,odd=0;
    printf("enter the elements");
    for(i=0;i<10;i++)
   {
     scanf("%d",&a[i]);
     
     if (a[i]%2==0)
             even=even+1;
        else
             odd=odd+1;
    }
    printf("even elements are:%d",even);
    printf("\n odd elements are:%d",odd);
}