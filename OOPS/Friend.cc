#include <iostream>
using namespace std;
class Friend
{
    int a;
    int b;

public:
    Friend()
    {
        a = 10;
        b = 20;
    }
    friend void display(Friend);
};
void display(Friend obj)
{
    cout << obj.a << " " << obj.b;
}
int main()
{
    Friend fr;
    display(fr);
}