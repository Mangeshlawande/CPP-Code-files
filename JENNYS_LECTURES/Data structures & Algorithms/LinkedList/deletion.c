#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
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
};

struct node * deleteFirst(struct node * head){
    struct node * ptr;
    ptr = head ;
    head = ptr->next ;
    free (ptr);
    printf("removed head node");
    return head;

}
   struct node * deleteAtIndex(struct node * head, int index){
    struct node *p = head, *q = head->next;
    int i=0;
    while (i != index-1)        
    {
        q= q->next;
        p= p->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
    
    }


int main(){

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

    printf("\nLinked List Before Deletion \n");
    linkedListTraversal(head);
    // head = deleteFirst(head);
    head = deleteAtIndex(head, 2);
    // deleteAtGivenValue(head, 36 );
    // deleteLast(head);


    printf("\nLinked List after Deletion \n");
    linkedListTraversal(head);

    return 0;
}