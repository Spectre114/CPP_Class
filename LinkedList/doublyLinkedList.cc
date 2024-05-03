#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    Node *prev;
    int val;
    Node *next;
};
void insert(Node **head, Node **tail)
{
    Node *p = (Node *)malloc(sizeof(Node *));
    int value;
    cout << "Enter the value to insert: ";
    cin >> value;
    p->prev = NULL;
    p->val = value;
    p->next = NULL;
    if (!(*head))
    {
        (*head) = p;
        (*tail) = p;
    }
    else
    {
        (*tail)->next = p;
        p->prev = (*tail);
        (*tail) = p;
    }
}
void display(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void Delete(Node **head, Node **tail)
{
    if ((*head) == (*tail))
        (*tail) = NULL;
    Node *toDelete = (*head);
    (*head) = (*head)->next;
    (*head)->prev = NULL;
    delete toDelete;
}
int main()
{
    int ch;
    Node *head = NULL, *tail = NULL;
    do
    {
        cout << "Enter your Choice:\n1: Insert\n2: Display\n3: Delete\n4: Exit\n>> ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert(&head, &tail);
            break;
        case 2:
            display(head);
            break;
        case 3:
            Delete(&head, &tail);
            break;
        }
    } while (ch != 4);
}