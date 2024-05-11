#include <iostream>
using namespace std;
class Stranger2;
class Stranger1
{
    string name;

public:
    Stranger1()
    {
        name = "HEllo";
    }
    friend void display(Stranger1, Stranger2);
};
class Stranger2
{
    string name;

public:
    Stranger2()
    {
        name = "World";
    }
    friend void display(Stranger1, Stranger2);
};
void display(Stranger1 stranger1, Stranger2 stranger2)
{
    cout << stranger1.name << " " << stranger2.name;
}
int main()
{
    Stranger1 stranger1;
    Stranger2 stranger2;
    display(stranger1, stranger2);
}