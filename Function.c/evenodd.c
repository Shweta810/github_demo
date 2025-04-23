#include<stdio.h>
void checkevenodd(int num);
int main(){
    int num;
    printf("enter the number");
    scanf("%d\n",&num);
    checkevenodd(num);
return 0;

}
void checkevenodd(int num){
    if(num%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}