#include<stdio.h>
int main()
{
    int row=10;
    //printf("Enter the Number of Row:");
    //scanf("%d",&row);
    for (int i = 1; i < row; i++)
    {   
        for (int j=row; j > i; j--)
        {
           printf("  "); 
        }
        printf("*");
        for (int j=2; j<=i; j++)
        {
           printf("  ");
            
        }
        printf("*");
        printf("\n");
    }
    for (int j=1; j<=row; j++)
        {
           printf(" *");
            
        }
    return 0;
}