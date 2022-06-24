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
struct Node*search(struct Node*head,int x){
struct Node*ptr=head;
int count=-1;
while(ptr!=NULL){
    count++;
if(ptr->data ==x){
printf("the element %d is at index %d",x,count);
}
ptr=ptr->next;
}
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
   head =search(head,66);
   return 0;
}