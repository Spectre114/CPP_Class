#include <iostream>
using namespace std;
class Parent
{
    int var1 = 10;
    char var2 = 'a';

public:
    void update()
    {
        var1 = var1 * 10;
    }
    void display()
    {
        cout << var1 << " " << var2 << endl;
    }
};
class child
{
    int var1 = 10;
    char var2 = 'a';
    Parent parent;

public:
    void update()
    {
        var1 = var1 * 10;
    }
    void display()
    {
        cout << var1 << " " << var2 << endl;
        parent.display();
    }
};
int main()
{
    Parent classObj1, classObj2;
    classObj1.update();
    classObj1.display();
    classObj2.display();
}