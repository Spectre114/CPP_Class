#include <iostream>
using namespace std;
class FunctionOver
{
public:
    void add(int a, int b)
    {
        cout << a + b << endl;
    }
    void add(double a, double b)
    {
        cout << a + b << endl;
    }
    void add(char a, char b)
    {
        cout << a + b << endl;
    }
    void add(string a, string b)
    {
        cout << a + b << endl;
    }
};
int main()
{
    FunctionOver fo;
    fo.add(10, 20);
    fo.add(10.2, 20.2);
    fo.add('a', 'b');
    fo.add("abc", "abc");
}