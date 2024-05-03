#include <iostream>
using namespace std;
void toSwap(int *p, int *q)
{
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}
int main()
{
    int a = 10;
    int b = 20;
    // int *p = &a;
    // int *q = &b;
    cout << "Before swapping: " << a << " " << b;
    toSwap(&a, &b);
    cout << "After swapping: " << a << " " << b;
}