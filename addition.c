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
//for adding a number in the linked list 
struct Node*addition(struct Node*head,int value){
struct Node*p=head;
while(p!=NULL){
p->data+=value;
printf("%d\n",p->data);
p=p->next;
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
   printf("linked list befor addition:-\n");
   linkedlist_traversal(head);
   printf("linked list after addition:-\n");
   addition(head,98);
   return 0;
}