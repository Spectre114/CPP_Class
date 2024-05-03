#include <iostream>
using namespace std;
int main()
{
    for (int i = 100; i <= 200; i++)
    {
        if (i % 3 == 0)
        {
            int temp = i;
            int rev = 0;
            while (temp != 0)
            {
                int rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            cout << rev << " ";
        }
    }
    return 0;
}