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
    LinkedList(int val)
    {
        this->val = val;
        next = nullptr;
    }
    void insert()
    {
        int val;
        cout << "Enter the value to insert: ";
        cin >> val;
        if (this->next == nullptr)
        {
            this->next = new LinkedList(val);
        }
        else
        {
            LinkedList *temp = this->next;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = new LinkedList(val);
        }
    }
    void insert(int val)
    {
        // int val;
        // cout << "Enter the value to insert: ";
        // cin >> val;
        if (this->next == nullptr)
        {
            this->next = new LinkedList(val);
        }
        else
        {
            LinkedList *temp = this->next;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = new LinkedList(val);
        }
    }
    void Delete()
    {
        LinkedList *toDelete = this->next;
        if (toDelete == nullptr)
        {
            cout << "Underflow" << endl;
            return;
        }
        this->next = toDelete->next;
        delete toDelete;
    }
    void display()
    {
        LinkedList *temp = this->next;
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
    LinkedList *dummy = new LinkedList();
    dummy->insert(10);
    dummy->insert();
    dummy->insert(11);
    dummy->insert(13);
    dummy->insert(14);
    dummy->insert(15);
    dummy->display();
    dummy->Delete();
    dummy->display();
}