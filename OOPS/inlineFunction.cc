#include <iostream>
using namespace std;
inline int fun(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 10, b = 20, c;
    const int PI = 3.14;
    c = fun(a, b);
    cout << c;
    // PI = 3;
}