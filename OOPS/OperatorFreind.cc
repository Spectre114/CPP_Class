#include <iostream>
using namespace std;
class Complex
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real;
        cin >> imag;
    }
    void Display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    friend Complex operator+(Complex &, Complex &);
    friend void operator++(Complex &);
    friend void operator++(Complex &, int);
};
Complex operator+(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
void operator++(Complex &c)
{
    ++c.real;
    ++c.imag;
}
void operator++(Complex &c, int)
{
    c.real++;
    c.imag++;
}
int main()
{
    Complex c1, c2, add;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();
    ++c1;
    c1.Display();
    c2++;
    c2.Display();
    add = c1 + c2;
    add.Display();
}