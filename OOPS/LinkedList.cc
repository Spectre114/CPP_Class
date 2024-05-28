#include <bits/stdc++.h>
using namespace std;
class LinkedList
{
    int val;
    LinkedList *next;

public:
    LinkedList()
    {
        val = -1;
        next = nullptr;
    }
    void insert()
    {
        LinkedList *p = new LinkedList();
        LinkedList *temp = this->next;
        cout << "Enter the value to insert: ";
        cin >> p->val;
        if (temp == nullptr) // When linked list does not exist
        {
            this->next = p;
        }
        else
        {
            static int count = 0;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = p;
        }
    }
    void Delete()
    {
        LinkedList *head = this->next;
        if (head == NULL)
        {
            cout << "Underflow" << endl;
            return;
        }
        this->next = head->next;
        delete head;
    }
    void display()
    {
        LinkedList *temp = this->next;
        if (temp == NULL)
        {
            cout << "Underflow" << endl;
            return;
        }
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList *ll = new LinkedList();
    int ch;
    do
    {
        cout << "Enter your Choice:\n1: Insert\n2: Display\n3: Delete\n4: Exit\n>> ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ll->insert();
            break;
        case 2:
            ll->display();
            break;
        case 3:
            ll->Delete();
            break;

        default:
            break;
        }
    } while (ch != 4);
}