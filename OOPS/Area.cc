#include <iostream>
using namespace std;
class Area
{
    int length, breadth;

public:
    Area()
    {
        length = 0;
        breadth = 0;
    }
    void setDim(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int getArea()
    {
        return length * breadth;
    }
};
int main()
{
    int length, breadth;
    float area;
    Area a;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    a.setDim(length, breadth);
    area = a.getArea();
    cout << area << endl;
}