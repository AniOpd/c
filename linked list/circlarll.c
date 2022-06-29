#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node*next;
};
//display function
struct Node*display(struct Node*head){
struct Node*p=head;
do{
printf("%d\n",p->data);
p=p->next;
}while(p!=head);
return head;
}

//for insetion of node at head node
struct Node* insertathead(struct Node*head, int data){
struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
struct Node*p=head->next;
while(p->next!=head){
p=p->next;
}
ptr->next=p->next;
p->next=ptr;
head=ptr;
return head;
}
//main function
int main(){
   struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node*fifth;
    struct Node*sixth;
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));
    sixth=(struct Node*)malloc(sizeof(struct Node));
    head->data = 56;
    head->next = first;
    first->data = 96;
    first->next = second;
    second->data = 98;
    second->next = third;
    third->data = 86;
    third->next = fourth;
    fourth->data = 91;
    fourth->next = fifth;
    fifth->data=13;
    fifth->next=sixth;
    sixth->data=36;
    sixth->next=head;
    head=display(head);
    printf("a\n");
    head=insertathead(head,1212);
    display(head);
    return 0;
}