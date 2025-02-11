#include <stdio.h>
#define N 5  // Define the size of the circular queue

int queue[N];
int front = -1;
int rear = -1;

// Enqueue function to add elements to the circular queue
void enqueue(int x) {
    if ((rear + 1) % N == front) {  // Check if the queue is full
        printf("Queue is Full!\n");
    } else {
        if (front == -1) {  // Initialize front when the first element is enqueued
            front = 0;
        }
        rear = (rear + 1) % N;  // Increment rear circularly
        queue[rear] = x;
        printf("%d enqueued to circular queue.\n", x);
    }
}

// Dequeue function to remove elements from the front of the circular queue
void dequeue() {
    if (front == -1) {  // Check if the queue is empty
        printf("Queue is Empty!\n");
    } else {
        printf("Dequeued element is: %d\n", queue[front]);
        if (front == rear) {  // Queue has only one element
            front = rear = -1;  // Reset to empty state
        } else {
            front = (front + 1) % N;  // Increment front circularly
        }
    }
}

// Peek function to view the front element of the circular queue
void peek() {
    if (front == -1) {  // Check if the queue is empty
        printf("Queue is Empty!\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
    }
}

// Display function to show all elements in the circular queue
void display() {
    if (front == -1) {  // Check if the queue is empty
        printf("Queue is Empty!\n");
    } else {
        printf("Circular Queue elements are:\n");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % N;  // Move circularly
        }
        printf("\n");
    }
}

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);  // Queue should be full after this

    display();    // Display all elements

    dequeue();    // Remove one element
    enqueue(30);  // Add another element

    display();    // Display updated queue

    peek();       // Display front element

    return 0;
}
