// 1234
// 123
// 12
// 1
#include <iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}