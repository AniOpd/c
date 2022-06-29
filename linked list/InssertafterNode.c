#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node*next;
    int data;
};
void display(struct Node*ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* insertafterNode(struct Node*head, struct Node*Node, int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=Node->next;
    ptr->data=data;
    Node->next =ptr;
}
int main (){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=56;
    head->next=second;
    second->data=86;
    second->next=third;
    third->data=95;
    third->next=fourth;
    fourth->data=87;
    fourth->next=NULL;
    printf("The linked list before insertion :-\n");
    display(head);
    printf("Linked list after Insertion :-\n");
    insertafterNode(head,second, 2020);
    display(head);
}