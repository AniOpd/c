#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *push(struct Node *head, int data)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->next = head;
    p->data = data;
    return p;
}
struct Node *display(struct Node *head)
{
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
    return head;
}
// fuction for seraching an element in linked list with recursion
bool search(struct Node *head, int x)
{
    // Base case
    if (head == NULL)
        return false;

    // If key is present in current node, return true
    if (head->data == x)
    {
        return true;
    }
    // Recur for remaining list
    return search(head->next, x);
}
int main()
{
    struct Node *head;
    struct Node *second;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    head->data = 86;
    head->next = second;
    second->data = 96;
    second->next = NULL;
    head = push(head, 89);
    head = push(head, 95);
    head = push(head, 86);
    head = push(head, 92);
    head = push(head, 8);
    head = push(head, 5);
    display(head);
    search(head, 86) ? printf("Yes") : printf("No");
    return 0;
}