#include<stdio.h>
void fun(int*,int*);
void main(){
    int x=5;
    int y=7;
    fun(&x,&y);
    printf("%d,%d\n",x,y);
}

    void fun(int* x,int *y){
    *x=7;
    *y=5;
    printf("%d%d\n",*x,*y);


}