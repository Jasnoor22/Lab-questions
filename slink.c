// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct Node  *insertionhead(struct Node*head,int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->next= head;
    ptr->data =data;
    return ptr;
}
struct Node  *insertionafternode(struct Node*head,struct Node *prevNode,int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->next= prevNode->next;
    prevNode->next=ptr;
    ptr->data =data;
    return head;
}
struct Node  *insertionend(struct Node*head,int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data =data;
    struct Node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next =NULL;
    return head;
}

struct Node  *insertionindex(struct Node*head,int data,int index){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node *p =head ;
    int i=0;
    while (i!=index-1)
    {
        p =p->next ;
        i++;
    }
    ptr->next= p->next;
    ptr->data =data;
    p->next = ptr;
    return head;
}
int main() {
    struct Node *head;
    struct Node *second;
    struct Node *three;
    
    head = (struct Node *) malloc(sizeof(struct Node ));
    second = (struct Node *) malloc(sizeof(struct Node ));
    three = (struct Node *) malloc(sizeof(struct Node ));
    
    head->data = 7;
    head->next=second;
    second->data = 8;
    second->next = three;
    three->data= 9;
    three->next=NULL;
    traversal(head);
    head = insertionhead(head,6);
    head = insertionindex(head,56,1);
    head = insertionend(head,10);
    head =insertionafternode(head,second,45);
    traversal(head);
    return 0;
}