#include <iostream>
using namespace std;
int sum = 0;
void armstrong(int n, int num)
{
    if (n == 0)
        return;
    int rem = n % 10;
    sum += rem * rem * rem;
    armstrong(n / 10, num);
}
main()
{
    int num;
    cin >> num;
    armstrong(num, num);
    if (num == sum)
        cout << "Armstrong";
    else
        cout << "Not";
}