#include <stdio.h>

int main() {
    int num1,num2,num3,max;

    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    printf("Enter 3nd number:");
    scanf("%d",&num3);
    max=(num1>num2)?
    (num1>num3?num1:num3):
    (num2>3?num2:num3);

    printf("Number %d is greater.",max);
    
}