#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
}
int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack * ptr){
    if(ptr->top=ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack * ptr){
    if(isFull(ptr)){
        printf("Stack Overflow!!");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
void pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow!!");
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack * sp, int i){
    int arrayInd=sp->top-i+1;
    if(arrayInd<0){
        printf("Not a Valid Position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}
