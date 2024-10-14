#include <stdio.h>
#include<math.h>
int main() {
    int cintrest,amount,principal,rate,time,compound;

    printf("Enter the Principal Amount:");
    scanf("%d",&principal);
    printf("Enter the Rate :");
    scanf("%d",&rate);
    printf("Enter the Time (Year):");
    scanf("%d",&time);
    printf("No. of time Compound in a Year:");
    scanf("%d",&compound);

    cintrest=(principal*pow((1+rate/compound),time))-principal;

    printf("Compound Interest:%d",cintrest);

    return 0;
}