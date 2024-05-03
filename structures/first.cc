#include <iostream>
using namespace std;

struct st
{
    int a;
    char b;
    float c;
    bool d;
    // st(int a) {} // parameterized constructor
    // st() {}      // Default constructor
    // st(int a, int b)
    // {
    //     cout << a + b << endl;
    // }
    void fun()
    {
        cout << "Function" << endl;
    }
};

int main()
{
    st var1;
    var1.b = 10;
    var1.fun();
}