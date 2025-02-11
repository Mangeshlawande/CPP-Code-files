#include <stdio.h>
#include <stdlib.h>

// Define the structure of a doubly linked list node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {  // Traverse to the end of the list
        temp = temp->next;
    }
    temp->next = newNode;  // Link the last node to the new node
    newNode->prev = temp;  // Link new node back to the last node
}

// Function to traverse the list in reverse order
void reverseTraversal(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty!\n");
        return;
    }

    // Move to the last node
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Traverse backwards from the last node
    printf("Reverse traversal of the doubly linked list:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;  // Move to the previous node
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert elements into the doubly linked list
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    // Perform reverse traversal
    reverseTraversal(head);

    return 0;
}
