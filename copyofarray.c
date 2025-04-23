#include<stdio.h>
int maoin(){
    int arr1[100],arr2[100];
    int i,n;
    scanf("%d",&n);
    printf("%d elements of the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("\n\n");

}