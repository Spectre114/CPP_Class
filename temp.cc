#include <iostream>
using namespace std;
int main()
{
    int *a, *b, *temp;
    int var1, var2;
    cout << "Enter value of a and b :";
    cin >> var1 >> var2;
    a = &var1;
    b = &var2;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapingna =" << *a << "\n"
         << *b;
}