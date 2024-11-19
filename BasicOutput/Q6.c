#include <stdio.h>

int main() {
    int principal,rate,time,intrest;
    printf("Enter the Principal amount:");
    scanf("%d",&principal);
    printf("Enter the intrest Rate:");
    scanf("%d",&rate);
    printf("Enter the Time in Year:");
    scanf("%d",&time);

    intrest=(principal*rate*time)/100;
    printf("Simple Interst:%d ",intrest);
    printf("\nTotal Amount:%d",principal+intrest);

    return 0;
}