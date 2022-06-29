#include <stdio.h>
#include <stdlib.h>
 struct Node *top;
struct Node
{
    int data;
    struct Node *next;
};
int isempty(struct Node *p)
{
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(struct Node *p)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}
struct Node *push(struct Node *p, int x)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("stack overflow\n");
    }
    n->data = x;
    n->next = p;
    p = n;
    printf("%d is pushed in the stack\n", p->data);
    return p;
}
int pop(struct Node *p)
{
    if (isempty(p))
    {
        printf("stack underflow\n");
    }
    struct Node *n = p;
    p = p->next;
    int x = n->data;
    free(n);
    return x;
}
void linkedlist_traversal(struct Node*ptr){
while(ptr!=NULL){
printf("Element :- %d\n",ptr->data);
ptr=ptr->next;
}
}
int main()
{
   
    top = (struct Node *)malloc(sizeof(struct Node));
    top= NULL;
    isempty(top);
    isfull(top);
    top = push(top, 86);
    top = push(top, 30);
    top = push(top, 32);
    top = push(top, 1);
    top = push(top, 69);
    top = push(top, 83);
    top = push(top, 39);
    top = push(top, 36);
    top = push(top, 53);
    top = push(top, 6);
    top = push(top, 8);
    printf("%d is poped from the stack \n", pop(top));
    linkedlist_traversal(top);
    return 0;
}