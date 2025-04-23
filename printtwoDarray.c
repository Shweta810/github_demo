#include <stdio.h>
int main(){
    int a[2][3],i,j,sum=0;
    printf("enter the element of matrix");
    for(i=0;i<2;i++)
    {
        for(i=0;i<3;i++)
        {
            scanf("%d%d",&a[i][j]);
        }
    }
    printf("Matrix is:%d");
    for(i=0;i<2;i++)
    {
        for(i=0;i<3;i++)
      {  printf("%d\n",a[i][j]);
        sum=sum=a[i][j];
        }
        printf("\n");

 }
 printf('\nsum:%d',sum);

}