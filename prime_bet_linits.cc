//  print all the prime numbers between limits entered by the user
#include <iostream>
#include <math.h>
using namespace std;
main()
{
    int low, up;
    cout << "Enter the lower and upper limit: ";
    cin >> low >> up;
    for (int i = low; i <= up; i++)
    {
        // low - up -> all numbers
        // Check i whether it is prime or not
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
            cout << i << endl;
    }
}
