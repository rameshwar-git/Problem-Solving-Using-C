#include<stdio.h>
int main(){
    int num=10;
    int i,j,k,sp;
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-i;j++)
            printf("*");
        for(sp=0;sp<=i*2-1;sp++)
            printf(" ");
        for(j=0;j<num-i;j++)
            printf("*");
        printf("\n");
    }
    for(i=num-1;i>=0;i--)
    {
        for(j=0;j<num-i;j++)
            printf("*");
        for(sp=0;sp<=i*2-1;sp++)
            printf(" ");
        for(j=0;j<num-i;j++)
            printf("*");
        printf("\n");
    }
}
