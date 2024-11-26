
int main(){
    int n=5;
    int i,j,k;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<i;j++)
            printf("%d",n-j);
        for(k=0;k<n*2-i*2-1;k++)
            printf("%d",n-i);
        for(j=i-1;j>=0;j--)
            printf("%d",n-j);
        printf("\n");

    }
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<i;j++)
            printf("%d",n-j);
        for(k=0;k<n*2-i*2-1;k++)
            printf("%d",n-i);
        for(j=i-1;j>=0;j--)
            printf("%d",n-j);
        printf("\n");

    }
    return 0;

}
