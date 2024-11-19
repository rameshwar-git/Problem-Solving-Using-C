// You are using GCC
#include<stdio.h>

int main(){

    int a=0,b=1,c,i,num;
    scanf("%d",&num);
     for(i=1;i<=num;i++){
         c=a+b;
         a=b;
         b=c;

     }
     printf("%d",c);
     return 0;
}
