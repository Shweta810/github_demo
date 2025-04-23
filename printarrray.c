#include<stdio.h>
int main(){
    int arr[10],i;
    printf("enter the element");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
for(i=0;i<10;i++)
{
    printf("%d",arr[i]);
    }
printf("\n array at index :%d");
return 0;
}