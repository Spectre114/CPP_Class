// 11234
// 12123
// 12312
// 12341
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= (n - 1); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << k + 1;
        }
        cout << endl;
    }
}