#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void linkedListTraversal(struct node * ptr){

    ptr;
    printf("The element is : ");
    while (ptr != NULL) 
    {
        printf("%d ->", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node * firstInsert(struct node *head){
 // insert at head :
    struct node * newnode ;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data you want to insert : ");
    scanf("%d", & newnode -> data);
    newnode->next = head;
    head = newnode;
    return head;

}
struct node * endInsert(struct node *head){
 // insert at end :
    struct node * newnode ,*ptr;
    ptr = head;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data you want to insert at end : ");
    scanf("%d", & newnode -> data);
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->next = NULL;
    return head;
}


struct node * afterInsert(struct node *head){
 // insert at after given position :
    struct node * newnode ,*ptr ;
    ptr = head;
    newnode = (struct node*) malloc(sizeof(struct node));
    int pos=0;
    int count=1;
    for (int i = 0; ptr->next!=NULL; i++)
    {
        ptr = ptr->next;
        count++;
        
    }
    printf("Enter the position in between 1 to %d: ",count-1);
    scanf("%d", & pos);

     printf("count %d\n", count);
    if(pos > count){
        printf("Invalid position\n");
    }else{
    printf("\nEnter the element : ");
    scanf("%d", & newnode -> data);

    int i=0;
    ptr = head;
    while (i < pos)
    {
        ptr = ptr->next;
        i++;
    }
   newnode->next =ptr->next;
   ptr->next = newnode;

    }
    return head;
}



void main(){

    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 24;
    second->next = third;

    third->data = 36;
    third->next = fourth;

    fourth->data = 48;
    fourth->next = NULL;


    linkedListTraversal(head);
    // head= firstInsert(head);
    // head= endInsert(head);
    head= afterInsert(head);
    linkedListTraversal(head);


}