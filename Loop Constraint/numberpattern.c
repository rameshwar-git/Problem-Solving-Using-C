#include<stdio.h>
int main(){
    int first=1,last=4;
    int i,j,k,sp;
    for(i=0;i<last;i++)
    {
        for(j=0;j<i;j++)
            printf("%d",j+1);
        for(k=0;k<last-i;k++)
            printf("%d",first);
        for(k=1;k<last-i;k++)
            printf("%d",last);
        for(j=0;j<i;j++)
            printf("%d",j+1);
        first++;
        last--;
        printf("\n");
    }
}

