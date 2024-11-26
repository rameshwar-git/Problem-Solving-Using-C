#include<stdio.h>
int main()
{
    int n,m;
    int i,j,k;
    n=5;
    m=9;

    for(i=n;i<=m;i++)
        {
        for(j=n;j<i;j++)
            printf("%d",j);
        for(k=0;k<=m*2-i*2-1;k++)
            printf("%d",i);
        for(j=i;j>=n;j--)
            printf("%d",j);
        printf("\n");
        }
    for(i=m-1;i>=n;i--)
        {
        for(j=n;j<i;j++)
            printf("%d",j);
        for(k=0;k<=m*2-i*2-1;k++)
            printf("%d",i);
        for(j=i;j>=n;j--)
            printf("%d",j);
        printf("\n");
        }
}
