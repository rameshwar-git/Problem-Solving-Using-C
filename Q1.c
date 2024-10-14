#include<stdio.h>
void main(){
    int num1,num2,sum;

    printf("Enter the First Number:");
    scanf("%d",&num1);
    printf("Enter the Second Number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Sum of Num 1=%d and Num 2=%d is %d",num1,num2,sum);
}