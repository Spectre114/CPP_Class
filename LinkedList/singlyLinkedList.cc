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
    while (head != NULL)
    {
        head = head->next;
        len++;
    }
    return len;
}
bool cycleDetection(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}
void findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->val;
}
void insert(Node **head)
{
    int value;
    Node *p = (Node *)malloc(sizeof(Node *));
    cout << "Enter the value to insert: ";
    cin >> value;
    p->val = value;
    p->next = NULL;
    if (*head == NULL) // If linked list doesnot exist make the first node as head
    {
        *head = p;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
}
Node *DeleteValue(Node *head)
{
    int value;
    cout << "Enter the value to delete: ";
    cin >> value;
    if (head->val == value)
    {
        head = head->next;
    }
    else
    {
        Node *traverse = head;
        while (traverse != NULL && traverse->next != NULL && traverse->next->val != value)
        {
            traverse = traverse->next;
        }
        if (traverse != NULL && traverse->next != NULL)
        {
            Node *toDelete = traverse->next;
            traverse->next = toDelete->next;
            delete toDelete;
        }
    }
    return head;
}
void DeletePos(Node **head)
{
    int pos;
    cout << "Enter the position to delete[0 indexed]: ";
    cin >> pos;
    int len = length((*head));
    if (pos >= len)
        return;
    if (pos == 0)
    {
        (*head) = (*head)->next;
    }
    else
    {
        Node *traverse = (*head);
        while (pos > 1)
        {
            traverse = traverse->next;
            pos--;
        }
        Node *toDelete = traverse->next;
        traverse->next = toDelete->next;
        delete toDelete;
    }
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}
void printReverse(Node *head)
{
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->val << " ";
}
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *cur = head;
    Node *curNext = cur->next;
    while (cur->next != NULL)
    {
        cur->next = prev;
        prev = cur;
        cur = curNext;
        curNext = curNext->next;
    }
    cur->next = prev;
    return cur;
}
int main()
{
    int ch;
    Node *head = NULL;
    // cout << head;
    do
    {
        cout << "Enter your Choice:\n1: Insert\n2: Display\n3: Delete by Value\n4: Delete by Position\n5: Find Middle\n6: Print in Reverse\n7: Reverse\n8: Exit\n>> ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert(&head); // head passed as call by value
            break;
        case 2:
            display(head);
            break;
        case 3:
            head = DeleteValue(head);
            break;
        case 4:
            DeletePos(&head);
            break;
        case 5:
            findMid(head);
            break;
        case 6:
            printReverse(head);
            cout << endl;
            break;
        case 7:
            head = reverse(head);
            break;
        default:
            break;
        }
    } while (ch != 8);
}
