// *
// * * *
// * * * * *
// * * * * * * *
#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "N: ";
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}