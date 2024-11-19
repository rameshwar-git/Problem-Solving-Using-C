#include<stdio.h>
int main()
{
    int num=6;
    for(int row=0;row<=num;row++)
    {
        for(int star=num;star>=row;star--)
            printf("*");
        for(int space=1;space<=row;space++)
            printf(" ");
        for(int space=1;space<=row;space++)
            printf(" ");
        for(int star=num;star>=row;star--)
            printf("*");
        printf("\n");
    }
    for(int row=1;row<=num;row++)
    {
        for(int star=0;star<=row;star++)
            printf("*");
        for(int space=num;space>row;space--)
            printf(" ");
        for(int space=num;space>row;space--)
            printf(" ");
        for(int star=0;star<=row;star++)
            printf("*");
        printf("\n");
    }
}
