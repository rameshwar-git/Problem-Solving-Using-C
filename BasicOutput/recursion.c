#include <stdio.h>
//int recurtion(int);
void main() {
    int num,res;

    res=recurtion(5);
    printf("%d",res);

}
int recurtion(int a){
    if(a==1)
        return 1;
    else
        return a*recurtion(a-1);
}
