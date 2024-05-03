#include <iostream>
using namespace std;
class Operator
{
    int a = 10;

public:
    Operator operator+(Operator op2)
    {
        Operator temp;
        temp.a = this->a + op2.a;
        return temp;
    }
    void operator++(int)
    {
        cout << a++ << endl;
    }
    void operator++()
    {
        cout << ++a << endl;
    }
    void operator--(int)
    {
        cout << a-- << endl;
    }
    void operator--()
    {
        cout << --a << endl;
    }
};
int main()
{
    Operator op1, op2, op3, op4;
    op1++;
    ++op1;
    // op3.add(op1, op2);
    // op3 = op1 + op2; // op3 = op1.operator+(op2);
}