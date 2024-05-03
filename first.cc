#include <iostream>
using namespace std;
int main()
{
    int x;                         // x = 2
    cout << "Enter your choice: "; // Output
    cin >> x;                      // Input
    // while (x < 10)
    // {
    //     if (x == 5){
    //         break;
    //     }
    //     cout << x; // 2,3,4
    //     x++;
    // }
    // for(initialization,termination condition,updation condition)
    for (; x < 10; x++)
    {
        if (x == 5)
            continue;
        cout << x;
        x++;
    }
}