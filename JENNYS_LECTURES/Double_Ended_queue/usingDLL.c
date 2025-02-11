#include<stdio.h>
#include<stdlib.h>

// Node structure for the doubly linked list
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Front and rear pointers of the deque
Node* front = NULL;
Node* rear = NULL;

// Function to create a new node
Node* createNode(int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at the front of the deque
void enqueueFront(int val) {
    Node* newNode = createNode(val);
    if (front == NULL && rear == NULL) { // If deque is empty
        front = rear = newNode;
    } else {
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }
    printf("Inserted %d at front.\n", val);
}

// Insert at the rear of the deque
void enqueueRear(int val) {
    Node* newNode = createNode(val);
    if (front == NULL && rear == NULL) { // If deque is empty
        front = rear = newNode;
    } else {
        newNode->prev = rear;
        rear->next = newNode;
        rear = newNode;
    }
    printf("Inserted %d at rear.\n", val);
}

// Remove from the front of the deque
void dequeueFront() {
    if (front == NULL && rear == NULL) { // If deque is empty
        printf("Deque is empty, nothing to dequeue from front.\n");
        return;
    }
    Node* temp = front;
    printf("Removed %d from front.\n", front->data);
    if (front == rear) { // If there's only one element
        front = rear = NULL;
    } else {
        front = front->next;
        front->prev = NULL;
    }
    free(temp);
}

// Remove from the rear of the deque
void dequeueRear() {
    if (front == NULL && rear == NULL) { // If deque is empty
        printf("Deque is empty, nothing to dequeue from rear.\n");
        return;
    }
    Node* temp = rear;
    printf("Removed %d from rear.\n", rear->data);
    if (front == rear) { // If there's only one element
        front = rear = NULL;
    } else {
        rear = rear->prev;
        rear->next = NULL;
    }
    free(temp);
}

// Display all elements in the deque
void display() {
    if (front == NULL && rear == NULL) {
        printf("Deque is empty.\n");
        return;
    }
    Node* temp = front;
    printf("Deque elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Display the front element
void displayFront() {
    if (front == NULL) {
        printf("Deque is empty.\n");
    } else {
        printf("Front element: %d\n", front->data);
    }
}

// Display the rear element
void displayRear() {
    if (rear == NULL) {
        printf("Deque is empty.\n");
    } else {
        printf("Rear element: %d\n", rear->data);
    }
}

int main() {
    enqueueFront(5);
    enqueueFront(10);
    enqueueRear(15);
    enqueueRear(20);
    display();
    displayFront();
    displayRear();

    dequeueFront();
    dequeueRear();
    display();
    displayFront();
    displayRear();

    return 0;
}
