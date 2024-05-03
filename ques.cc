#include <iostream>
using namespace std;
main()
{
    int x;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter a value: ";
        cin >> x;
        sum += i;
    }
    cout << sum;
}