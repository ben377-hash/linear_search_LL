#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}Node;
int main() {
     Node *New,*head=NULL,*temp;
     int choice;
    printf("How many numbers you want ?");
    scanf("%d",&choice);
    while(choice--){
        New=(Node*)malloc(sizeof(Node));
        printf("Enter the data");
        scanf("%d",&New->data);
        New->link=NULL;
        if(head==NULL){
            head=temp=New;
        }
        else{
            temp->link=New;
            temp=New;
        }
    }
    int x;
    printf("Enter the no. you are looking for");
    scanf("%d",&x);
    temp=head;
    int count=1;
    if(x==temp->data){
        printf("Found at %d index",count);
        return 0;
    }
    while(temp!=NULL){
        if(x==temp->data){
            ++count;
            printf("Found at %d index",count);
        }
        temp=temp->link;
    }

    return 0;
}
