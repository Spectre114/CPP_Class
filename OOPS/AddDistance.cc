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
    void AddDist(AddDistance d1, AddDistance d2)
    {
        metre = d1.metre + d2.metre;
        cm = d1.cm + d2.cm;
        if (cm >= 100)
        {
            metre += cm / 100;
            cm -= 100;
        }
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
    d3.AddDist(d1, d2);
    // d3 = d1 + d2; // Operator overloading
    // d1.AddDist(d2);
    // d2.AddDist(d1);
    d3.display();
}