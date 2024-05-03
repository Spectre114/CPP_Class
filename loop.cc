#include <iostream>
using namespace std;
main()
{
    // x1 ,x2 x3 ....
    int x;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter a value: ";
        cin >> x;
        if (x % 2 == 0)
            cout << x;
    }
}
// sum of digits of a number
// 1234
// 1 + 2 + 3 + 4 = 10