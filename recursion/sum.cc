#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;
    int a = 1;
    int b = 2;
    return n + sum(n - 1);
}
main()
{
    int num;
    cout << "Enter a number";
    cin >> num;
    cout << sum(num) << endl;
}