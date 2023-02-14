#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int StackTop(struct stack *sp){
    return sp->arr[sp->top];
}
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}