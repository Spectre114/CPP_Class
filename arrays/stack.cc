#include <iostream>
using namespace std;
void Push(int st[], int &top, int n)
{
    top++;
    if (top == n)
    {
        cout << "Overflow" << endl;
        top--;
    }
    else
    {
        int x;
        cout << "Enter the value to push: ";
        cin >> x;
        st[top] = x;
    }
}
void Pop(int st[], int &top)
{
    if (top < 0)
        cout << "Underflow" << endl;
    else
    {
        cout << "The poped value is: " << st[top] << endl;
        top--;
    }
}
void Top(int st[], int top)
{
    if (top < 0)
        cout << "Stack is empty" << endl;
    else
        cout << st[top] << endl;
}
main()
{
    int n;
    cout << "Enter the size of stack: ";
    cin >> n;
    int st[n];
    int ch;
    cout << "Enter your choice\n1: push()\n2: pop()\n3: top()\n4: Exit\n>>";
    cin >> ch;
    int top = -1;
    do
    {
        /* code */
        switch (ch)
        {
        case 1: // Push()
            Push(st, top, n);
            break;
        case 2: // Pop()
            Pop(st, top);
            break;
        case 3: // Top()
            Top(st, top);
            break;
        default:
            break;
        }
        cout << "Enter your choice\n1: push()\n2: pop()\n3: top()\n4: Exit\n>>";
        cin >> ch;
    } while (ch != 4);
}