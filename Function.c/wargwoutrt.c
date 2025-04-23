#include <stdio.h>
void sum(float,float);
void main(){
    float a,b;
    printf("enter a and b:");
    scanf("%f%f",&a,&b);
    sum(a,b);
}
void sum(float a,float b){
    float s=0;
    s=a+b;
    printf("sum=%f",s);

}