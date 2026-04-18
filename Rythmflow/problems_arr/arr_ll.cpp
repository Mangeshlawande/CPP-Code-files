#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;

    // constructor to initialize node
    Node(int val) : data(val), next(nullptr) {}
};

class Solution
{
public:
    // Convert array to linked list and return head
    Node *arrayToLinkedList(const vector<int> &arr)
    {
        if (arr.empty())
            return nullptr;

        // Create head node
        Node *head = new Node(arr[0]);
        Node *curr = head;

        // Iterate through array and create nodes
        for (int i = 1; i < arr.size(); i++)
        {
            curr->next = new Node(arr[i]);
            curr = curr->next;
        }

        return head;
    }

    // Print linked list
    void printList(Node *head)
    {
        while (head)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << "\n";
    }
};



int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = sol.arrayToLinkedList(arr);
    sol.printList(head);

    return 0;
}