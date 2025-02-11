/*
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node * next;
};

struct node * front = 0;
struct node * rear = 0;

void enqueue(int x){
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if(front==0 && rear ==0){
        front =rear = newnode;
    }
    else{
        rear->next =newnode;
        rear = newnode; 
    }
}

void display(){
    struct node * temp;
    temp = front ;
    if(front==0 &&rear ==0){
        printf("Queue is Empty!! \n");
    }
    else{
        while (temp!=0)
        {
            printf("element is : %d\n", temp->data);
            temp = temp->next;
        }
    }
}

void dequeue(){
    struct node * temp;
    temp = front ;
    if(front==0 &&rear ==0){
        printf("Queue is Empty!! \n");
    }
    else{
        printf(" dequeued element is : %d\n", temp->data);
       front = temp->next;
    //    front = front->next;
       free(temp);

    }
}

void peek(){
    struct node * temp;
    temp = front ;
    if(front==0 &&rear ==0){
        printf("Queue is Empty!! \n");
    }
    else{// front element
        printf(" peek element is : %d\n", front->data);

    }
}

int main(){

    enqueue(5);
    enqueue(2);
    enqueue(0);
    enqueue(-3);
    enqueue(4);
    display();
    dequeue();
    peek();
    display();


    return 0;

}
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

// Enqueue function to add elements to the queue
void enqueue(int x) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;

    if (front == 0 && rear == 0) {  // Queue is initially empty
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

// Display function to show all elements in the queue
void display() {
    struct node *temp;
    temp = front;

    if (front == 0) {  // Check if the queue is empty
        printf("Queue is Empty!\n");
    } else {
        printf("Queue elements are:\n");
        while (temp != 0) {
            printf("Element: %d\n", temp->data);
            temp = temp->next;
        }
    }
}

// Dequeue function to remove elements from the front of the queue
void dequeue() {
    struct node *temp;
    if (front == 0) {  // Check if the queue is empty
        printf("Queue is Empty!\n");
    } else {
        temp = front;
        printf("Dequeued element is: %d\n", temp->data);
        front = front->next;
        free(temp);

        // If the queue becomes empty, reset rear to 0 as well
        if (front == 0) {
            rear = 0;
        }
    }
}

// Peek function to view the front element of the queue
void peek() {
    if (front == 0) {  // Check if the queue is empty
        printf("Queue is Empty!\n");
    } else {
        printf("Peek element is: %d\n", front->data);
    }
}

int main() {
    enqueue(5);
    enqueue(2);
    enqueue(0);
    enqueue(-3);
    enqueue(4);

    display();
    dequeue();
    peek();

    return 0;
}
