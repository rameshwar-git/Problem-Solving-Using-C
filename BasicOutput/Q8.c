#include <stdio.h>

int main() {
    int a,b,c;
    //Using 3 Variables.
    printf("Using 3 Variables.");
    printf("\nEnter 1st Variable:");
    scanf("%d",&a);
    printf("Enter 2nd variable:");
    scanf("%d",&b);
    printf("\nBefore Swap a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swap a=%d b=%d:",a,b);

    //Without Using 3 variable;
    printf("\n\nWithout Using 3 Variables.");
    printf("\nBefore Swap a=%d b=%d",a,b);
    a=a*2;
    b=b*2;
    b=a/2;
    a=b/2;
    printf("\nAfter Swap a=%d b=%d:",a,b);

    //Single Statement Using Comma operator
    printf("\n\nWithout Using 3 Variables.");
    printf("\nBefore Swap a=%d b=%d",a,b);
    c=a,a=b,b=c;
    printf("\nAfter Swap a=%d b=%d:",a,b);

    return 0;
    
}