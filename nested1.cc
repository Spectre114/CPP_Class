#include <iostream>
using namespace std;
main()
{
    int low, n;
    cout << "Enter lower and upper limit: ";
    cin >> low >> n;
    for (int i = 0; i <= n; i++) // -> n
    {
        int sum = 0;
        int temp = i;
        while (temp != 0) // -> m
        {
            int rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        cout << sum << endl;
    }
}