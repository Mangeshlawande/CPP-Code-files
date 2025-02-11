

/*

generalized version of queue 
stack - LIFO
queue - FIFO

insertion = rear
deletion = front


deque(dec): double ended queue
    can insert and delete from both end 

types of deue():
    1.input restricted :
        insertion allowes from one end but deletion from both end ;
        insertion at rear(tail) end ,
        deletion at front(head) end 
    2. output restricted :
        deletion allows only one end , insertion allows from both end ;

Deque operations:
    1.insert at front()
    2.deletion from front()
    3.insert at rear()
    4.delete from rear()
    5. getFront()
    6. getRear();
    7.isFull();
    8.isEmpty();

    Application : 
    1 perform redo and undo operation();
    2.used in multiprocessor segment / scheduling :

    data Structure we can use 
        1. circular Queue
        2. doubly linked list 

*/
#include<stdio.h>
#include<stdlib.h>
#define N 5
    
    int deque[N];
    int front =-1, rear =-1;

void enqueueFront(int val){
    if((front == 0 && rear == N-1 ) || front == rear + 1){
        printf("Queue is full !!!!");
    }
    else if(front == - 1 && rear ==-1){
        front =rear = 0;
        deque[front] = val;

    }else if(front == 0){
        front = N-1;
        deque[front] = val;
    }else{
        front--;
        deque[front] = val;

    }
};

void enqueueRear(int val){
    if((front == 0 && rear == N-1 ) || (front == rear + 1)){
        printf("Queue is full !!!!");
    }else if(front == -1 && rear == -1){
        front = rear = 0;
        deque[rear] = val;
    }
    else if(rear == N-1){
        rear = 0;
        deque[rear] = val ;
    }
    else{
        rear++;
        deque[rear] = val ;
            }

}

void display(){
    int i = front;
    while (i!=rear)
    {
        printf("%d  ", deque[i]);
        i = (i+1)%N;
    }
    printf("%d\n", deque[rear]);

}
void displayFront(){
    if(front==-1 && rear == -1 ) {
        printf("Queue is Empty !!");
    }
    else{
        printf("The Front element is : %d ", deque[front]);
        
    }
}
void displayRear(){
    if(front==-1 && rear == -1 ) {
        printf("Queue is Empty !!");
    }
    else{
        printf("The Front element is : %d ", deque[rear]);

    }
}

void dequeueFront(){
    if(front==-1 && rear == -1 ) {
        printf("Queue is Empty !!");
    }
    else if(front == N-1){
        printf("The Front element is : %d ", deque[front]);
        front = 0;
    }
    else{
        printf("The Front element is : %d ", deque[front]);
        front++;
    }
}

void dequeueRear(){
    if(front==-1 && rear == -1 ) {
        printf("Queue is Empty !!");
    }
    else if(rear == 0){
        printf("The Front element is : %d ", deque[rear]);
        rear = N-1;
    }
    else{
        printf("The Front element is : %d ", deque[rear]);
        rear--;
    }
}

int main(){

    enqueueFront(5);
    enqueueFront(2);
    enqueueRear(-1);
    enqueueRear(0);
    enqueueFront(7);
    enqueueFront(4);

    return 0;
}