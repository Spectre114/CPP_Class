#include <iostream>
using namespace std;
class AddDistance
{
    int metre;
    int cm;
    int d;

public:
    void setDist()
    {
        cout << "In metres:";
        cin >> metre;
        cout << "In centimetres:";
        cin >> cm;
    }
    AddDistance operator+(AddDistance d2)
    {
        AddDistance temp;
        temp.metre = metre + d2.metre;
        temp.cm = cm + d2.cm;
        if (temp.cm >= 100)
        {
            temp.metre += cm / 100;
            temp.cm -= 100;
        }
        return temp;
    }
    void operator-()
    {
        metre = -metre;
        cm = -cm;
    }
    void operator++(int)
    {

        metre++;
        cm++;
    }
    void operator++()
    {
        ++metre;
        ++cm;
    }
    void display()
    {
        cout << metre << " " << cm << endl;
    }
};
int main()
{
    AddDistance d1, d2, d3;
    cout << "Enter distance 1: ";
    d1.setDist();
    cout << "Enter distance 2: ";
    d2.setDist();
    // d3.AddDist(d1, d2);
    -d2;
    d3 = d1 + d2;
    d1++;
    ++d1;
    // d1++;
    // d1.AddDist(d2);
    // d2.AddDist(d1);
    d1.display();
    d2.display();
    d3.display();
}