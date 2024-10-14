#include<stdio.h>
void main(){
    int celc,fer,opt;

    printf("Choose the Following to Convert:\n1.Celcious to Fahrenheit\n2.Fahrenheit to Celcious \nChoice:");
    scanf("%d",&opt);

    if (opt==1){
        printf("Enter the Temperture in Celcious:");
        scanf("%d",&celc);
        fer=(celc*9/5)+32;
        printf("Temprature in Fahrenheit:%d",fer);
    }
    else if (opt==2){
        printf("Enter the Temperture in Fahrenheit:");
        scanf("%d",&fer);
        celc=(fer-32)/(9/5);
        printf("Temprature in Celcious:%d",celc);
    }
    else{
        printf("Invalid Input!");
    }
}