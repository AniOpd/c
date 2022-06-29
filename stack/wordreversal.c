#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack{
int size;
int top;
char *arr;
};
struct stack*newstack(int size){
struct stack*ptr=(struct stack*)malloc(sizeof(struct stack));
ptr->top=-1;
ptr->arr=(char*)malloc(ptr->size*sizeof(char));
ptr->size=size;
return ptr;
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

struct stack*push(struct stack*p,char word){
if(isfull(p)){
    printf("stack overflow\n");
    return p;
}
p->top++;
p->arr[p->top]=word;
printf("%c is pushed in the stack\n",word);
}
int main(){
    struct stack*words;
    words=newstack(50);
    char a='a';
    words=push(words,a);
}