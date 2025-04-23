# include <stdio.h>
void main()
{
    int a[5],i;
    for(i=0;i<5;i++)
   { printf("enter the array element");
        scanf("%d",&a[i]);
        }
    for(i=0;i<5;i++)
   {
     printf("\narray element at index is %d",a[i]);}

    for(i=5;i>=0;i--)
   {
     printf("\narray element at index %d is %d:",i,a[i]);
   }

}