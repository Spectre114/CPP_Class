#include <iostream>
using namespace std;
int main()
{
    // data_type_of_pointer *pointer_name;
    int a = 10;
    int *p;
    p = &a; // referencing
    // cout << "Value of a: " << a << endl;
    cout << "Referenced Value: " << p << endl;
    cout << "DeReferenced Value: " << *p << endl;
}