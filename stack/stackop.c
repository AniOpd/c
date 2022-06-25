#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stack{
int size;
int top;

int *arr;
};
struct stack*newstack(struct stack*s,int size){
struct stack*stack=(struct stack*)malloc(sizeof(struct stack));
stack->size=size;
stack->top=-1;
stack->arr=(int*)malloc(stack->size*sizeof(int));
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
struct stack*push(struct stack*stack,int value){
if(isfull(stack)){
    printf("NO space in stack!\n");
}
stack->top+=1;
stack->arr[stack->top]=value;
printf("the element %d is pushed in the stack\n",value);
return stack;
}
struct stack*pop(struct stack*stack){
if(isempty(stack)){
    printf("No item to be popped!\n");
    return stack;
}
stack->arr[stack->top--];
return stack;
}
int main(){
    struct stack*stack;
   stack=newstack(stack,50);
   stack=pop(stack);
    stack=push(stack,92);
    stack=push(stack,86);
    stack=push(stack,96);
    stack=push(stack,6);
    stack=push(stack,8);
    printf("%d is poped from the stack\n",stack->arr[stack->top]);
    stack=pop(stack);
    
    return 0;
}