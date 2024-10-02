#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isfull(struct stack *mayank){
    if (mayank->top == mayank->size -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *mayank , int value){
    if (isfull(mayank))
    {
        printf("stack overflow!" , value);
    }
    else
    {
        mayank->top++;
        mayank->arr[mayank->top] = value;
    }
}

int isempty(struct stack *mayank){
    if (mayank->top ==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop(struct stack *mayank){
    if (isempty(mayank))
    {
        printf("stack underflow!\n");
    }
    else
    {
        int value = mayank->arr[mayank->top];
        mayank->top--;
        return value;
    }
}
int main(){
    struct stack *sp =(struct stack *) malloc(sizeof(struct stack));
    sp->size =10;
    sp->top =-1;
    sp->arr =(int*) malloc(sp->size * sizeof(int));
    printf("stack has been created\n");

    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6); // ---> Pushed 10 values 
    // push(sp, 46); // Stack Overflow since the size of the stack is 10
    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));
    return 0;
}


