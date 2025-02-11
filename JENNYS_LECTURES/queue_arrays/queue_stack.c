#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N],s2[N];
int top1 =-1, top2=-1;
int count =0;

int pop1(){
    int val = s1[top1];
    top1--;
    return val;
}

int pop2(){
    int val = s2[top2];
    top2--;
    return val;
}

void push1(int x){
   if(top1==N-1){
    printf("stack overflow !!");
   } else{
    top1++;
    s1[top1] = x;
   }
}

void push2(int x){
   if(top2==N-1){
    printf("stack overflow !!");
   } else{
    top2++;
    s2[top2] = x;
   }
}


void enqueue(int data){
    push1(data);
    count++;

}

void dequeue(){
    int a,b;
    if(top1==-1 && top2==-1 ){
        printf("Queue is empty!!");
    }else{
        for (int i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("The popped element is :%d\n",b);
        count--;
         for (int i = 0; i < count; i++)
        {
            a = pop2();
            push1(a);
        }
    }
}

void display(){
    for (int i = 0; i <=top1; i++)
    {
        printf("%d ",s1[i]);
    }
    printf("\n");
}


int main (){

    enqueue(5);
    enqueue(2);
    enqueue(-1);
    display();
    dequeue();
    enqueue(7);
    display();

    return 0;
}