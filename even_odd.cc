#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a value:";
    cin >> x;
    if ((x & 1) == 0)
    {
        cout << "The no is even";
    }
    else
    {
        cout << "The number is odd";
    }
    return 0;
}