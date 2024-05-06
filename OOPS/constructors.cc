#include <iostream>
using namespace std;
class Constructor
{
    int var1;
    int var2;

public:
    Constructor()
    {
        var1 = 0;
        var2 = 0;
    }
    Constructor(int var1, int var2)
    {
        this->var1 = var2;
        this->var2 = var2;
    }
    Constructor(Constructor &obj1)
    {
        this->var1 = obj1.var1;
        this->var2 = obj1.var2;
    }
    void display()
    {
        cout << var1 << " " << var2 << endl;
    }
};
int main()
{
    Constructor obj1, obj2(10, 20), obj3(obj1);
    obj1.display(); // 0 0
    obj2.display(); // 20 20
    obj3.display(); // 0 0
}