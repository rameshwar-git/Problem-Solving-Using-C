#include<stdio.h>
#define PIE 3.14
void main(){
    float radious, perimeter,area;
    printf("Enter the Radious of Circle:");
    scanf("%f",&radious);
    perimeter=2*PIE*radious;
    area=radious*radious*PIE;
    printf("Perimeter:%0.2f",perimeter);
    printf("\nArea:%0.2f",area);
}