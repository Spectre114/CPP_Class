// Queue Using Singly Linked List
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
};
int length(Node *head)
{
    int len = 0;
    while (head)
    {
        head = head->next;
        len++;
    }
    return len;
}
void insert(Node **head, Node **tail)
{
    int value;
    Node *p = (Node *)malloc(sizeof(Node *));
    cout << "Enter the value to insert: ";
    cin >> value;
    p->val = value;
    p->next = NULL;
    if (tail == NULL) // If linked list doesnot exist make the first node as head
    {
        *tail = p;
        *head = p;
    }
    else
    {
        (*tail)->next = p;
    }
}
Node *Delete(Node *head)
{
    Node *toDelete = head;
    head = head->next;
    delete toDelete;
    return head;
}

void display(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}
void top(Node *head)
{
    cout << head->val << endl;
}
int main()
{
    int ch;
    Node *head = NULL, *tail = NULL;
    // cout << head;
    do
    {
        cout << "Enter your Choice:\n1: Insert\n2: Display\n3: Delete \n4: Top\n5: Exit\n>> ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert(&head, &tail); // head passed as call by value
            // if (head == NULL)
            //     head = tail;
            break;
        case 2:
            if (head == NULL)
                cout << "Underflow";
            display(head);
            break;
        case 3:
            if (!head)
                cout << "Underflow";
            head = Delete(head);
            if (!head)
                tail = NULL;
            break;
        case 4:
            top(head);
            break;
        default:
            break;
        }
    } while (ch != 5);
}
