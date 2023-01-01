#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
void push(struct stack* ptr, int val)
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
int pop(struct stack* ptr)
{
    if(isEmpty(ptr)){
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
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

//precedence function for initializing operator value
int precedence(char ch)
{
    if(ch =='*' || ch == '/')
        return 3;
    else if(ch =='+' || ch == '-')
        return 2;
    else
        return 0;
}


//isOperator function use to check the element is a operator or not
int isOperator(char ch)
{
    if(ch =='+' ||ch =='-' ||ch =='*' ||ch =='/' )
        return 1;
    else
        return 0;
}

//infix, postfix implementation using stack
char * infixToPostfix(char* infix)
{
    struct stack* ptr =(struct stack*) malloc (sizeof(struct stack));
    ptr->size = 100;
    ptr->top = -1;
    ptr->arr = (char*) malloc(ptr->size*sizeof(char));
    char * postfix = (char*) malloc((strlen(infix)+1)*sizeof(char));
    int i= 0; //track infix traversal
    int j=0; //track postfix addition
    while(infix[i] != '\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])> precedence(stackTop(ptr)))
            {
                push(ptr,infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(ptr);
                j++;
            }
        }
    }
    while(!isEmpty(ptr))
    {
        postfix[j] = pop(ptr);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int*) malloc (s.size*sizeof(int));

    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int*) malloc (s->size*sizeof(int));

    if(isEmpty)
        printf("The stack is empty\n");
    else
        printf("The stack is not empty\n");

    char * infix = "a-b+t/6";
    printf("Postfix is = %s\n", infixToPostfix(infix));

    return 0;
}

