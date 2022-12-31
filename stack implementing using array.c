#include<stdio.h>
#include<stdlib.h>

struct stack{
int size;
int top;
int *arr;
};

// checking stack is empty or not
int isEmpty( struct stack* ptr)
{
    if(ptr->top==-1)
        return 1;
    else
        return 0;
}

// checking stack is full or not
int isFull(struct stack* ptr)
{
    if(ptr->top == ptr->size-1)
        return 1;
    else
        return 0;
}

//pushing element on the stack
void push(struct stact* ptr, int val)
{
    if(isFull(ptr))
      printf("Stack Overflow\n");
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

//poping function in stack
void pop(struct stack* ptr)
{
    if(isEmpty(ptr))
        printf("Stack underflow\n");
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
    }
}

// Finding value at certain position
int peek(struct stack* ptr, int i)// i= index number
{
   if(ptr->top-i+1<0){
        printf("Not a valid position\n");
        return -1;
   }
   else{
        return ptr->arr[ptr->top-i+1];
   }
}

// Finding top element of the stack
int stackTop(struct stack* ptr)
{
    return ptr->arr[ptr->top];
}

//Finding bottom element of the stack
int stackBottom(struct stack* ptr)
{
    return ptr->arr[0];
}

int main()
{
    //struct stack s;
    //s.size = 80;
    //s.top = -1;
    //s.arr = (int*) malloc (s.size*sizeof(int));

    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int*) malloc (s->size*sizeof(int));

    if(isEmpty)
        printf("The stack is empty\n");
    else
        printf("The stack is not empty\n");

    return 0;
}
