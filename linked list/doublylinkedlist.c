#include<stdio.h>
#include<stdlib.h>
struct Node{
int data ;
struct Node*previous;
struct Node*next;
};
struct Node*display(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->previous;
    while(p!=NULL){
        printf("%d \n",p->data);
        p=p->next;
        q=p->previous;
        if(p->next==NULL)
        break;
    }  
    printf("%d\n",p->data);
     while(q!=NULL){
        printf("%d\n",q->data);
        q=q->previous;
    }

}


int main(){
    struct Node*head;
    struct Node*first;
    struct Node*second;
    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    head->previous=NULL;
    head->data=96;
    head->next=first;
    first->previous=head;
    first->data=86;
    first->next=second;
    second->previous=first;
    second->data=82;
    second->next=NULL;
    display(head);

    return 0;
} 