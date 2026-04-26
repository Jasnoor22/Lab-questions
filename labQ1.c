#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data ;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Elements of the Llist:%d\n", ptr->data);
        ptr=ptr->next;
    }
}
struct Node  *insertionatend(struct Node *head,int data){
    struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node*p=head;
    while(head->next != NULL){
        head=head->next;
    }
    head->next=ptr;
    ptr->next=NULL;
    ptr->data=data;
    return p;
}
int main(){
    struct Node *head,*second,*third,*fourth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    //fifth=(struct Node *)malloc(sizeof(struct Node));
    head->data=16;
    head->next=second;
    second->data=32;
    second->next=third;
    third->data=64;
    third->next=fourth;
    fourth->data=72;
    fourth->next=NULL;
    //fifth->data=128;
    //fifth->next=NULL;
    insertionatend(head,128);

    linkedlistTraversal(head);
}