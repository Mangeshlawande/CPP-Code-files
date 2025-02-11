#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue function to add elements to the circular queue
void enqueue(int x) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = NULL;

    if (front == NULL) {  // If the queue is empty
        front = newnode;
        rear = newnode;
        newnode->next = front;  // Point the new node back to the front (circular link)
    } else {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;  // Maintain circular link
    }
    printf("%d enqueued to circular queue.\n", x);
}

// Dequeue function to remove elements from the front of the circular queue
void dequeue() {
    if (front == NULL) {  // Check if the queue is empty
        printf("Queue is Empty!\n");
    } else if (front == rear) {  // Only one element in the queue
        printf("Dequeued element is: %d\n", front->data);
        free(front);
        front = rear = NULL;  // Reset front and rear to NULL
    } else {
        struct Node* temp = front;
        printf("Dequeued element is: %d\n", front->data);
        front = front->next;
        rear->next = front;  // Maintain circular link
        free(temp);
    }
}

// Peek function to view the front element of the circular queue
void peek() {
    if (front == NULL) {
        printf("Queue is Empty!\n");
    } else {
        printf("Front element is: %d\n", front->data);
    }
}

// Display function to show all elements in the circular queue
void display() {
    if (front == NULL) {
        printf("Queue is Empty!\n");
    } else {
        struct Node* temp = front;
        printf("Circular Queue elements are:\n");
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != front);
        printf("\n");
    }
}

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);

    display();  // Display all elements

    dequeue();  // Remove one element
    peek();     // Display the front element
    display();  // Display remaining elements

    return 0;
}
