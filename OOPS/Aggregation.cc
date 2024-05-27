#include <iostream>
using namespace std;
class CLass1
{
    Class2 *class2;

public:
    void Display()
    {
        cout << class2->var;
    }
};
class Class2
{
public:
    int var;
};
