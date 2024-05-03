//       1
//     123
//   12345
// 1234567
#include <iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    for (int i = 0, temp = n - 1; i < n; i++, temp--)
    {
        for (int j = 0; j <= 2 * temp - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << k + 1;
        }
        cout << endl;
    }
}