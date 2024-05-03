#include <iostream>
using namespace std;
int main()
{
    int low, up;
    cout << "Enter lower and upper limit to print Armstrong number:";
    cin >> low >> up;

    for (int i = low; i <= up; i++)
    {
        int x = i;
        int sum = 0;
        while (x != 0)
        {
            int rem = x % 10;
            sum += rem * rem * rem;
            x /= 10;
        }
        if (sum == i)
        {
            cout << i << " ";
        }
    }
    return 0;
}