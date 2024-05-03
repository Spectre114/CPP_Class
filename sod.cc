#include <iostream>
using namespace std;
main() //-> function
{
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    if (num < 10)
    {
        cout << num;
        return 0;
    }
    int sum = 0;
    while (num != 0)
    {
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    cout << sum;
}
