#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int num1,num2;
    printf("enter the two no.");
    scanf("%d%d\n",&num1,&num2);
    printf("before swaping:num1=%d,num2=%d\n",num1,num2);
    swap(&num1,&num2);
    printf("after swaping:num1=%d,num2=%d\n",num1,num2);
    return 0;

}
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
    
