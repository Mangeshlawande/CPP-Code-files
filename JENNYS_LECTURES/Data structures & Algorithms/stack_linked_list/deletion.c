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

    //  Case 3: Deleting the last element 
struct node * deleteAtLast(struct node * head){
    struct node *p = head ;
    struct node * q = head->next;
  while(q->next!= NULL)
   {
    p = p->next;
    q = q->next;
   }
   p->next = NULL;
   free(q);
   return head;
}


//  Case 2: Deleting the element with a given value  
struct node * deleteAtGivenValue(struct node * head, int value){
    struct node *p = head ;
    struct node * q = head->next;
   while(q->data!= value && q->next!=NULL)
   {
    p = p->next;
    q = q->next;
   }
  if (q->data==value)
  {
    p->next = q->next;
    free(q);
  }
  else{
    printf("Element was not found in the Linked List!!\n");
  }
  
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
    // head = deleteAtIndex(head, 2);
    head = deleteAtGivenValue(head, 36 );
    // head = deleteLast(head);


    printf("\nLinked List after Deletion \n");
    linkedListTraversal(head);

    return 0;
}