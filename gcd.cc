#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;
    int n = x < y ? x : y; // even odd, divisibility, <,>
    int gcd;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}