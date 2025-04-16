#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    } *start=NULL;
    typedef struct node NODE;

void createnode(){
    NODE *temp=start;
    temp->data=10;
    temp->next=NULL;
}
void insert(int num){

    NODE *temp=start;
    while(num){
        int val;
        scanf("%d",&val);
        temp->data=val;
        temp->next=(NODE*)malloc(sizeof(NODE));
        num--;
    }
}
void display(){
    NODE *temp=start;
    //while(temp->next!=NULL){
        printf("Value:%d\n",start->data);
        //temp=temp->next;
    //}
}

int main(){
    int num;
    NODE *start=(NODE*)malloc(sizeof(NODE));
    while(1){
    printf("\nEnter Choice:\n1.Display:\n2.Insert.\n3.Exit\nChoice:");
    scanf("%d",&num);
        switch(num){
        case 1:
            display();
            break;
        case 2:
            //printf("Number of Element:");
            //int temp;
            //scanf("%d",&temp);
            createnode();
            break;
        case 3:
            exit(0);
        }
    }

}
