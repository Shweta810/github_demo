#include<stdio.h>
int main(){
    int i,n,arr[100];
    printf("%d",n);
    scanf("%d",&n);
    printf("\nenter the element of array:%d");
    for(i=0;i<n;i++)
    {
        printf("%delemnt of the array\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d");
    return 0;
}