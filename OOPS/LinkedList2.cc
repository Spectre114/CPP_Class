#include <bits/stdc++.h>
using namespace std;
class LinkedList
{
    int val;
    int tail;
    LinkedList *next;

public:
    LinkedList()
    {
        val = -1;
        next = NULL;
    }
    LinkedList(int val)
    {
        this->val = val;
        next = NULL;
    }
    void insert()
    {
        int val;
        cout << "Enter value for insertion: ";
        cin >> val;
        if (this->next == NULL)
        {
            this->next = new LinkedList(val);
        }
        else
        {
            LinkedList *temp = this->next;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = new LinkedList(val);
        }
    }
    void sortInsert()
    {
        int val;
        cout << "Enter value for insertion:";
        cin >> val;
        if (this->next == NULL)
        {
            this->next = new LinkedList(val);
        }
        else
        {
            LinkedList *temp = this;
            while (temp->next != nullptr)
            {
                if (temp->next->val >= val)
                {
                    LinkedList *p = new LinkedList(val);
                    p->next = temp->next;
                    temp->next = p;
                    break;
                }
                temp = temp->next;
            }
            if (temp->next == nullptr)
            {
                temp->next = new LinkedList(val);
            }
        }
    }
    void sortInsert(int val)
    {
        if (this->next == NULL)
        {
            this->next = new LinkedList(val);
        }
        else
        {
            LinkedList *temp = this;
            while (temp->next != nullptr)
            {
                if (temp->next->val >= val)
                {
                    LinkedList *p = new LinkedList(val);
                    p->next = temp->next;
                    temp->next = p;
                    break;
                }
                temp = temp->next;
            }
            if (temp->next == nullptr)
            {
                temp->next = new LinkedList(val);
            }
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
    LinkedList *node = new LinkedList();
    node->sortInsert();
    node->sortInsert();
    node->sortInsert();
    node->sortInsert();
    node->sortInsert();
    node->display();
}