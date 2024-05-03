// Implementation of Queue using Array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of queue: ";
    cin >> n;
    int qu[n];
    int ch;
    cout << "Enter your choice\n1:enque()\n2:deque()\n3:peak()\n4: Exit\n>>";
    cin >> ch;
    int front = -1, end = -1;
    do
    {
        switch (ch)
        {
        case 1: // Enque()
            end++;
            if (end > n - 1)
            {
                cout << "Overflow " << endl;
                end--;
            }
            else
            {
                int val;
                cout << "Enter the value to insert: ";
                cin >> val;
                if (front < 0)
                    front++;
                qu[end] = val;
            }
            break;
        case 2: // Dequeue()
            if (front < 0 && end < 0)
                cout << "Underflow" << endl;
            else
            {
                cout << "Dequeued value: " << qu[front] << endl;
                if (front == end)
                {
                    front = -1;
                    end = -1;
                    break;
                }
                for (int i = front; i < end; i++)
                {
                    qu[i] = qu[i + 1];
                }
                end--;
            }
            break;
        case 3: // Peek()
            cout << qu[end] << endl;
            break;
        }
        cout << "Enter your choice\n1:enque()\n2:deque()\n3:peak()\n4: Exit\n>>";
        cin >> ch;

    } while (ch != 4);
}