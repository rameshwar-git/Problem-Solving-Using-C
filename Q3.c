#include<stdio.h>
void main(){
    int length,breadth,area;

    printf("Enter the Length:");
    scanf("%d",&length);
    printf("Enter the Breadth:");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area of Rectangle: %d",area);
}