#include <iostream>
using namespace std;
class Parent // abstract -> hidden
{
protected:
    int var1 = 10;

public:
    virtual void display() = 0; // pure virtual function
};
class Child : public Parent
{
public:
    void display()
    {
        cout << "Class Child: " << var1;
    }
};
int main()
{
    Child child;
    child.display();
    // Definition of pure virtual function should exist in child class
}