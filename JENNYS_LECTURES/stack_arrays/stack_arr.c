#include <stdio.h>
#define N 10  // Size of the stack

int top = -1;    // Stack pointer initialized to -1
int stack[N];    // Stack array of size N

// Push function to insert element in stack
void push() {
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (top == N - 1) {  // Check if stack is full
        printf("Stack Overflow!\n");
    } else {
        top++;  // Increment the top index
        stack[top] = x;
        printf("%d pushed to stack.\n", x);
    }
}

// Pop function to remove element from stack
void pop() {
    int item;
    if (top == -1) {  // Check if stack is empty
        printf("Stack Underflow!\n");
    } else {
        item = stack[top];  // Get the top item
        top--;  // Decrement the top index
        printf("%d popped from stack.\n", item);
    }
}

// Peek function to view the top element of the stack
void peek() {
    if (top == -1) {
        printf("Stack is Empty!\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

// Display function to print all elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is Empty!\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("Element %d: %d\n", i, stack[i]);
        }
    }
}

int main() {
    int ch = 0;

    do {
        printf("\nEnter choice: \n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (ch != 5);  // Loop until user chooses to exit
    return 0;
}
