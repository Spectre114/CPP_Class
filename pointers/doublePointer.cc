#include <iostream>
#include <stdlib.h>
using namespace std;
int b = 20;       //&b = 200
void fun(int **p) // fun(100)
{
    *p = &b; // p = 200
}
int main()
{
    int a = 10; // &a = 100
    int *p;
    p = &a; // p = 100
    // int **ptr = &p;
    // cout << "a: " << a << endl;
    // cout << "Referenced p: " << p << endl;
    // cout << "DeReferenced p: " << *p << endl;
    // cout << "Referenced ptr: " << ptr << endl;
    // cout << "DeReferenced ptr: " << *ptr << endl;
    // cout << "DeReferenced ptr(value of a): " << **ptr << endl;
    fun(&p);
    cout << *p;
}