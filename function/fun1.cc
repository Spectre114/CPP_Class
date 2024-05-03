#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
main()
{
    int a = 10, b = 20;
    cout << "Before Swapping " << a << " " << b << endl;
    swap(a, b);
    cout << "After Swapping " << a << " " << b << endl;
}