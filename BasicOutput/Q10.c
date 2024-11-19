#include <stdio.h>

int main() {
    int num=0;
    printf("Enter the number:");
    scanf("%d",&num);
    (num%2==1)?printf("Number is Odd."):printf("Number is not Odd.");
    
}