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
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
        len++;
    }
    return len + 1;
}
Node *insert(Node *head)
{
    int value;
    cout << "Enter the value to insert: ";
    cin >> value;
    Node *p = (Node *)malloc(sizeof(Node *));
    p->val = value;
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = p;
    }
    p->next = head;
    return head;
}
Node *deletePos(Node *head)
{
    int pos;
    cout << "Enter the position to delete[0 indexed]: ";
    cin >> pos;
    int len = length(head);
    // cout << len << endl;
    if (pos >= len)
        return head;
    if (pos == 0)
    {
        Node *traverse = head;
        while (traverse->next != head)
        {
            traverse = traverse->next;
        }
        Node *temp = head;
        head = head->next;
        traverse->next = head;
        delete temp;
    }
    else
    {
        Node *traverse = head;
        while (pos > 1)
        {
            traverse = traverse->next;
            pos--;
        }
        Node *toDelete = traverse->next;
        traverse->next = toDelete->next;
        delete toDelete;
    }
    return head;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp->next != head)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << temp->val << endl;
}
int main()
{
    int ch;
    Node *head = NULL;
    do
    {
        cout << "Enter your Choice:\n1: Insert\n2: Display\n3: Delete\n4: Exit\n>> ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            head = insert(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            head = deletePos(head);
            break;
        default:
            break;
        }
    } while (ch != 4);
}