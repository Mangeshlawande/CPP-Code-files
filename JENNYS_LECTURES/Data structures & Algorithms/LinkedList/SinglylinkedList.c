#include<stdio.h>
#include<stdlib.h>


struct node
{
int data;
struct node *next;
};


struct node *head = 0;

void main () {

struct node *newnode, *temp;
int choice = 1;
// printf("Program to create singlyList  ");



while(choice){

newnode = (struct node *)malloc (sizeof(struct node));

printf("Enter node value :\n");

scanf("%d", &newnode->data);
newnode->next = 0;

if(head ==0)
{
head = temp = newnode;
}
else{
    temp->next = newnode;
    temp = newnode;

}
// printf("node data %d added successfully \n",newnode->data);
// printf("node next %p \n",newnode->next);
// printf(" head node value : %p \n", head);
printf("Do you want to add nodes in the linkedlist : \n");

scanf("%d",&choice);

}

// traverse the list 
temp = head ;
printf("The node values are :-> ");
while(temp != 0)
{
    printf("%d ", temp->data);
    temp = temp->next;
}
printf("\n");
}
