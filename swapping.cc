#include <iostream>
using namespace std;
main()
{
    int x, y;
    cout << "Enter the two nos.: ";
    cin >> x >> y;
    cout << "Nos. before swapping: " << x << " " << y << endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << "Nos. after swapping: " << x << " " << y << endl;
}