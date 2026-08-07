#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];  
    int top;        
} Stack;

int main(){
    printf("stack implimentation using array.....\n");
    Stack stack;
    stack.top = -1;
    int choice, value;

    // Function to push an element onto the stack
    void push(Stack *stack, int value){
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d onto the stack\n", value);

    // Function to pop an element from the stack
    int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }

    int popped = stack->arr[stack->top];
    stack->top--;
    printf("Popped %d from the stack\n", popped);
    return popped;
}
    }
}