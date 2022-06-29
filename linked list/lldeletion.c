#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// for displaying the elemts of node
struct Node *display(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return head;
}

// for deleting first node
struct Node *deletefirst(struct Node *head)
{
    struct Node *p = head;
    head = head->next;
    free(p);
    return head;
}

// for deleting node of given index
struct Node *deleteindex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// for deleting the last node of linked list
struct Node *deletelast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

//deletion of node by given value
struct Node* deletekey(struct Node*head,int value){
struct Node* p=head;
struct Node*q=head->next;
while(q->data!=value&&q->next!=NULL){
p=p->next;
q=q->next;
}
if(q->data==value){
p->next=q->next;
free(q);
}
return head;
}

int main()
{
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
    sixth->next=NULL;
    printf("linked list before any operation :-\n");
    display(head);
    head = deletefirst(head);
    printf("Linked list after deleting first node:-\n");
    display(head);
    printf("linked list after deletion of given index:-\n");
    head = deleteindex(head, 2);
    display(head);
    printf("linked list after deletion of last node:-\n");
    head = deletelast(head);
    display(head);
    printf("linked list after deletion of node by its value:-\n");
    head=deletekey(head,91);
    display(head);
    return 0;
}