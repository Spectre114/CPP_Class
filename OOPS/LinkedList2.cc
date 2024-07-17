#include <bits/stdc++.h>
using namespace std;
class LinkedList
{

public:
    int val;
    int tail;
    LinkedList *next;
    int carry = 0;
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
    void insert(int val)
    {
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
    void sortInsert(int val)
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
    void reverse()
    {
        LinkedList *prev = NULL;
        LinkedList *curr = this->next;
        LinkedList *currNext = curr->next;
        while (curr->next != NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = currNext;
            currNext = currNext->next;
        }
        curr->next = prev;
        this->next = curr;
    }
    LinkedList *mergeLinkedList(LinkedList *l2)
    {
        LinkedList *toReturn = new LinkedList();
        LinkedList *temp = toReturn;
        LinkedList *l1 = this->next;
        l2 = l2->next;
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val <= l2->val)
            {
                temp->next = new LinkedList(l1->val);
                l1 = l1->next;
            }
            else
            {
                temp->next = new LinkedList(l2->val);
                l2 = l2->next;
            }
            temp = temp->next;
        }
        while (l1 != nullptr)
        {
            temp->next = new LinkedList(l1->val);
            l1 = l1->next;
            temp = temp->next;
        }
        while (l2 != nullptr)
        {
            temp->next = new LinkedList(l2->val);
            l2 = l2->next;
            temp = temp->next;
        }
        return toReturn;
    }
    void addOne(LinkedList *plusOne)
    {
        if (plusOne->next == nullptr)
        {
            plusOne->val++;
            carry = plusOne->val / 10;
            plusOne->val %= 10;
            return;
        }
        addOne(plusOne->next);
        plusOne->val += carry;
        carry = plusOne->val / 10;
        plusOne->val %= 10;
    }
    void doubleLL(LinkedList *plusOne)
    {
        if (plusOne->next == nullptr)
        {
            plusOne->val *= 2;
            carry = plusOne->val / 10;
            plusOne->val %= 10;
            return;
        }
        doubleLL(plusOne->next);
        plusOne->val *= 2;
        plusOne->val += carry;
        carry = plusOne->val / 10;
        plusOne->val %= 10;
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
    void display(int)
    {
        LinkedList *temp = this;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    // LinkedList *l1 = new LinkedList();
    // LinkedList *l2 = new LinkedList();
    // l1->sortInsert(1);
    // l1->sortInsert(2);
    // l1->sortInsert(4);
    // l1->sortInsert(5);
    // l1->sortInsert(6);
    // l2->sortInsert(1);
    // l2->sortInsert(3);
    // l2->sortInsert(4);
    // LinkedList *l3;
    // l3 = l1->mergeLinkedList(l2);
    // l3->display();
    LinkedList *plusOne = new LinkedList(9);
    plusOne->insert(9);
    plusOne->insert(9);
    plusOne->display(1);
    plusOne->doubleLL(plusOne);
    if (plusOne->carry)
    {
        LinkedList *newNode = new LinkedList(plusOne->carry);
        newNode->next = plusOne;
        plusOne = newNode;
    }
    cout << endl;
    plusOne->display(1);
}