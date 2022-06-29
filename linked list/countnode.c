#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
void linkedlist_traversal(struct Node*ptr){
while(ptr!=NULL){
printf("Element :- %d\n",ptr->data);
ptr=ptr->next;
}
}
struct Node* counter(struct Node*head){
struct Node*p=head;
int count=0;
while(p!=NULL){
    count++;
    p=p->next;
}
printf("Number of elements in linked list is = %d\n",count);
return head;
}
int main()
{
   struct Node*head;
   struct Node*second;
   struct Node*third;
   head=(struct Node*)malloc(sizeof(struct Node));
   second =(struct Node*)malloc(sizeof(struct Node));
   third=(struct Node*)malloc(sizeof(struct Node));
   head->data=7;
   head->next=second;
   second->data=11;
   second->next=third;
   third->data=66;
   third->next=NULL;
   linkedlist_traversal(head);
   head=counter(head);
   
   return 0;
}
