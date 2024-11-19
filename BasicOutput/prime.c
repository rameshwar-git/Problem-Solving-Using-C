#include <stdio.h>

int main() {

    int num,rem,value,rev=0;
    num=112;
    value=num;
    printf("\nNum: %d",value);
    while (value)
    {
        rem=value%10;
        rev=rev*10+rem;
        value/=10;
    }
    printf("\nNum: %d",rev);
    if (rev==num)
    {
        printf("\nPalidrime Num");
    }
    else
     printf("\nNot Palidrime Num");


}
