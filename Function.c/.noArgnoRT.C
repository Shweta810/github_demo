#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum(void){
    int x=5,y=6,sum=0;
    sum=x+y;
    printf("sum:%d",sum);

}