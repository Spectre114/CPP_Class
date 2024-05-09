#include <iostream>
using namespace std;
class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real;
        cin >> imag;
    }
    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
    Complex operator-(Complex c2)
    {
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;
        return temp;
    }
    void display()
    {
        cout << "Complex numbers: " << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, add, sub;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();
    add = c1 + c2;
    sub = c1 - c2;
    add.display();
    sub.display();
}