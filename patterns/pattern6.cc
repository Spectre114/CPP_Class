//     1
//    12
//   123
//  1234
#include <iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << k + 1 << " ";
        }
        cout << endl;
    }
}