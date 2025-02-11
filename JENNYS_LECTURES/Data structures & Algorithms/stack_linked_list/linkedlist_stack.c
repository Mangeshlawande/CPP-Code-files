#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = 0;

void push(int val)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->link = top;
    top = newnode;
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("Stack is empty !\n");
    }
    else
    {
        while (temp != 0)
        {
            printf(" value is %d\n", temp->data);
            temp = temp->link;
        }
    }
}

void peek()
{
    if (top == 0)
    {
        printf("Stack is empty !\n");
    }
    else{
        printf(" Top element is %d \n", top->data);
    }
}

void pop(){
    struct node *temp ;
    temp = top;
    if(top ==0){
        printf("There is no node in the List !\n");
    }
    else{
        printf("The pop element is %d \n", top->data);
        top = temp-> link;
        // top = top-> link;
        free(temp);
    }
}


int main()
{

    push(2);
    push(3);
    push(10);
    printf("Node added in the stack successfully !\n");
    display();
    peek();
    pop();
    peek();
    display();

    return 0;
}