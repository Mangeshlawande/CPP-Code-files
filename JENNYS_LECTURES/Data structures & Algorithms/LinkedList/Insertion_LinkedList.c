#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node * next ;
};

void linkedListTraversal(struct node * ptr){

    ptr;
    printf("The element is : ");
    while (ptr != NULL) 
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node* insertAtBeggining(struct node * head , int value){
    struct node * temp= (struct node *) malloc (sizeof(struct node));
    temp->data = value;
    temp->next = head;
    head = temp ;
    return head;
};

struct node * insertAtIndex(struct node * head , int index, int value){
    struct node *ptr = (struct node *) malloc (sizeof(struct node));
    ptr->data = value;
    struct node *p;
    p = head ;
    int i=0;
    while(i != index-1 ){
        p = p->next ;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

return head;
}

struct node * insertAfterNode(struct node *head, struct node *prev, int value){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = prev->next ;
    prev->next = ptr;
    return head; 
}

struct node * insertAtEnd(struct node *head, int value){
    struct node *ptr = (struct node *) malloc (sizeof(struct node));
    ptr->data = value;
    struct node * p = head;
    
    while(p->next !=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next=NULL;

   return head; 
}



int main ()
{
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

    // struct node * temp;
    // temp = head;

    linkedListTraversal(head);
    // head = insertAtBeggining(head, 23);
    // head = insertAtIndex(head, 2, 13);
    // head = insertAtEnd(head, 80);
    head = insertAfterNode(head, third, 66);

    linkedListTraversal(head);



    return 0;
}