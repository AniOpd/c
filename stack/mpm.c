#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(struct stack *ptr, char ch)
{
    if (isfull(ptr))
    {
        printf("stack is full !\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = ch;
    }
}
int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("nothing to pop");
        return -1;
    }
    else
    {
        char ch = ptr->arr[ptr->top];
        ptr->top--;
        return ch;
    }
}
int stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int ismatchingpair(char ch1, char ch2)
{
    if (ch1 == '(' && ch2 == ')')
    {
        return 1;
    }
    if (ch1 == '{' && ch2 == '}')
    {
        return 2;
    }
    if (ch1 == '[' && ch2 == ']')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}
int parenthesismatching(char *exp)
{

    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->size = 10000;
    ptr->top = -1;
    ptr->arr = (char *)malloc(ptr->size * sizeof(char));
    int i = 0;
    char poped;
    for(i=0;exp[i]!='\0';i++)
    {
       if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
        push(ptr,exp[i]);
       }
       else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
        if(isempty(ptr)){
            return 0;
        }
        poped=pop(ptr);
        if(!ismatchingpair(poped,exp[i])){
            return 0;
        }
       }
}
if(isempty(ptr)){
    return 1;
}
else{
    return 0;
}
}
int main()
{
    char exp[100];
    scanf("%s",exp);
    if (parenthesismatching(exp))
    {
        printf("The parenthesis are in correct order\n");
    }
    else
    {
        printf("The parenthesis are not in correct order\n");
    }
    return 0;
}