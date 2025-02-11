/*
#include <stdio.h>
#define N 10  // Size of the queue

int front = -1;  // Front index of the queue
int rear = -1;   // Rear index of the queue
int queue[N];    // Queue array of size N

// Enqueue function to insert element in the queue
void enqueue() {
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (rear == N - 1) {  // Check if the queue is full
        printf("Queue Overflow!\n");
    } else {
        if (front == -1) {  // First element to be enqueued
            front = 0;
        }
        rear++;  // Increment the rear index
        queue[rear] = x;
        printf("%d enqueued to queue.\n", x);
    }
}

// Dequeue function to remove element from the queue
void dequeue() {
    int item;
    if (front == -1 || front > rear) {  // Check if the queue is empty
        printf("Queue Underflow!\n");
    } else {
        item = queue[front];  // Get the front item
        front++;  // Increment the front index
        printf("%d dequeued from queue.\n", item);
    }
}

// Front function to view the front element of the queue
void frontElement() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
    }
}

// Display function to print all elements of the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("Element %d: %d\n", i, queue[i]);
        }
    }
}

int main() {
    int ch = 0;

    do {
        printf("\nEnter choice: \n1. Enqueue\n2. Dequeue\n3. Front\n4. Display\n5. Exit\n");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            frontElement();
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
*/

#include<stdio.h>
#define N 10
int queue[N];
int front=-1;
int rear=-1;


void enqueue(int x){
    if(rear == N-1){
        printf("Overflow");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear]= x;
    }
}

void dequeue(int x){
    if(front==rear==-1){
        printf("queue is Empty !!\n");
    }
    else if (front==rear)
    {
        front==rear==-1;
    }
    else{
        printf("dequed element is %d", queue[front]);
        front++;
    }

}

void display(){
    if(front==rear==-1){
        printf("Queue is empty !!");
    }
    else{
        for (int i = front; i < rear+1; i++)
        {
            printf("element is : %d", queue[i]);
        }
        
    }
}
void peek(){
    if(front==rear==-1){
        printf("Queue is empty !!");
    }
    else{
    printf("element is : %d", queue[front]);
    }
}

int main(){


    return 0;
}
