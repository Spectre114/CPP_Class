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
        LinkedList *temp = new LinkedList();
        temp = this->next;
        cout << "Enter the value to insert: ";
        cin >> p->val;
        if (temp == nullptr) // When linked list does not exist
        {
            temp = p;
            this->next = temp;
        }
        else
        {
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = p;
        }
    }
    void display()
    {
        LinkedList *temp = this->next;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    LinkedList *ll = new LinkedList();
    int x = 5;
    while (x--)
        ll->insert();
    ll->display();
}