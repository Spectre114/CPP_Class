#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
};
Node *insert(Node *top)
{
    Node *p = (Node *)malloc(sizeof(Node *));
    int value;
    cout << "Enter the value to insert: ";
    cin >> value;
    p->val = value;
    p->next = NULL;
    if (top == NULL)
    {
        top = p;
    }
    else
    {
        p->next = top;
        top = p;
    }
    return top;
}
void display(Node *top)
{
    while (top != NULL)
    {
        cout << top->val << " ";
        top = top->next;
    }
    cout << endl;
}
Node *Delete(Node *top)
{
    Node *toDelete = top;
    top = top->next;
    delete toDelete;
    return top;
}
void Top(Node *top)
{
    cout << top->val << endl;
}
int main()
{
    Node *top = NULL;
    int ch;
    do
    {
        /* code */
        cout << "Enter your Choice:\n1: Insert\n2: Display\n3: Delete \n4: Top\n5: Exit\n>> ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            top = insert(top);
            break;
        case 2:
            if (top == NULL)
                cout << "UnderFlow" << endl;
            display(top);
            break;
        case 3:
            if (top == NULL)
                cout << "UnderFlow" << endl;
            top = Delete(top);
            break;
        case 4:
            Top(top);
        }
    } while (ch != 5);
}