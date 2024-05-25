#include <iostream>
using namespace std;
class Outer
{
public:
    class Inner
    {
    public:
        int var1;
    };
};
int main()
{
    Outer::Inner in;
    Outer out;
    cout << in.var1;
}