#include <stdio.h>

int main() {
    int res,num1,num2;
    char oper;
    printf("Enter the Operatior(+,-,*,/,%%):");
    scanf("%c",&oper);
    printf("Enter Frist Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    res=(oper=='+')?num1+num2:
    (oper=='-')?num1-num2:
    (oper=='*')?num1*num2:
    (oper=='/')?num1/num2:
    num1%num2;

    printf("Result=%d",res);
    return 0;
}