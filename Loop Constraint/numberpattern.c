#include <stdio.h>
int main(){
    int i=1,num=7,gap;
    for (int row = 0; row < num; row++)
    {
        for(int space=row;space<num;space++)
            printf("-");
        row++;
        for(int digit=i;digit<row;digit++){
            printf("%d",i);
            i++;
        }
        printf("\n");
    }
    return 0;
    
}