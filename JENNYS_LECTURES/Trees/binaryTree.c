// /*
// each node can have almost 2 children ; ie 0,1,2 children 
// maximum node possible at any level i is 2^i;

// max no of node of height h is : 2^0 ................2^h, a gp series
// 2^(h+1) - 1 ;


// minimum number of node possible is :: h+1;


// types of binary tree :
//     1.full /proper/ strict :
//          treee where each node contain either 0 or 2 children ;
//          number of nodes = num of internal nodes + 1;

//     2.complete binary tree 
//     3.perfect binary tree 
//     4.degenerate binary tree
//     5.




// */

// #include<stdio.h>
// #include<stdlib.h>

//      struct node {
//         int data ;
//         struct node * left ;
//         struct node *right;
//      };

// struct node * create()  {
//     int val;
//     struct node * newnode;
//     newnode = (struct node *) malloc(sizeof(struct node));

//     printf("Enter data (-1 for no node ) : ");
//     scanf("%d", &val);
//     if(val==-1){
//         return 0;
//     }
//     else{
//         newnode->data = val;
//         printf("Enter left child of %d ", &val);
//         newnode->left =  create();
//         printf("Enter right child of %d ", &val);
//         newnode->right =  create();
//         return newnode;
//     }
// }

// int main () {
//      struct node * root;
//      root = create();


//     return 0;

// }
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a binary tree
struct node* create() {
    int val;
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data (-1 for no node): ");
    scanf("%d", &val);
    if (val == -1) {
        return NULL;
    }

    newnode->data = val;

    printf("Enter left child of %d: ", val);
    newnode->left = create();

    printf("Enter right child of %d: ", val);
    newnode->right = create();

    return newnode;
}

// Inorder traversal (Left, Root, Right)
void inorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Preorder traversal (Root, Left, Right)
void preorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Postorder traversal (Left, Right, Root)
void postorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

// Display the tree structure (Indented representation)
void displayTree(struct node* root, int level) {
    if (root == NULL) {
        return;
    }
    displayTree(root->right, level + 1);
    for (int i = 0; i < level; i++) {
        printf("    ");
    }
    printf("%d\n", root->data);
    displayTree(root->left, level + 1);
}

// Main function
int main() {
    struct node* root = NULL;

    printf("Create the binary tree:\n");
    root = create();

    printf("\nTree Traversals:\n");
    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");

    printf("\nTree Structure:\n");
    displayTree(root, 0);

    return 0;
}
