#include <iostream>
using namespace std;
int main()
{
    int a = 10, d = 10, b, c;
    b = a++;
    c = ++d;
    cout << a << " " << b << " " << c << " " << d;
}