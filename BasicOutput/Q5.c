#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,disc;
    double root,x1,x2;
    printf("Enter the Coefficient a=");
    scanf("%d",&a);
    printf("Enter the Coefficient b=");
    scanf("%d",&b);
    printf("Enter the Coefficient c=");
    scanf("%d",&c);

    disc=b*b-4*a*c;
    if (disc<0)
        printf("Imagenary Roots is: %d+%di",a,b);
    else if (disc>0)
    {
        x1=(-b-sqrt(b*b-4*a*c))/2*a;
        x2=(-b+sqrt(b*b-4*a*c))/2*a;
        printf("Roots are :(%d, %d)",x1,x2);
    }
    else
    {
        root=pow(b,2)-4*a*c;
        printf("Root is :%d",root);
    }
    
    return 0;

}