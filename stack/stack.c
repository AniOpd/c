#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
struct stack *createstack(int size)
{
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->size = size;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->size * sizeof(int));
    return stack;
}
int isfull(struct stack*stack){
    if(stack->top==stack->size-1){
        return 1;
    }
    return 0;
}
int isempty(struct stack*stack){
    if(stack->top==-1){
        return 1;
    }
    return 0;
}
void push(struct stack*stack,int item){
    if(isfull(stack)){
        printf("NO space in stack!\n");
        return;
    }
    stack->arr[++stack->top] =item;
    printf("%d pushed in the stack\n",item);
}
int pop(struct stack*stack){
    if(isempty(stack)){
        printf("Nothing to pop\n");
        return INT_MIN;
    }
    return stack->arr[stack->top--];
}

int main(){
    struct stack*stack = createstack(2);
    if(isempty(stack)){
        printf("stack is empty\n");
    }
    if(isfull(stack)){
        printf("stack is full\n");
    }
    push(stack,38);
    push(stack,53);
    push(stack,45);
    
    printf("%d is poped from stack\n",pop(stack));
    push(stack,45);
    return 0;
}