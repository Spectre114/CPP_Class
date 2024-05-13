#include <iostream>
using namespace std;
class Shape
{
public:
    void area()
    {
        cout << "Calc Area";
    }
};
class Circle : public Shape
{
    float r;

public:
    void area()
    {
        cout << "\nEnter radius:";
        cin >> r;
        cout << "\nArea of circle:" << (3.14 * r * r);
        cout << "\nCircumference of circle:" << (2 * 3.14 * r);
    }
};
class Rectangle : public Shape
{
    int l, b;

public:
    void area()
    {
        cout << "\nEnter length and breadth of rectangle respectively:";
        cin >> l >> b;
        cout << "\nArea of rectangle:" << (l * b);
        cout << "\nPerimeter of rectangle:" << (2 * (l + b));
    }
};
class Triangle : public Shape
{
    int h, b;
    int s1, s2, s3;

public:
    void area()
    {
        cout << "Enter height and breadth of triangle:";
        cin >> h >> b;
        cout << "\nArea of triangle:" << (0.5 * b * h);
        cout << "\nPerimeter of triangle:" << (s1 + s2 + s3);
    }
};
int main()
{
    Circle circle;
    circle.area();
    // circle.perimeter();
    Rectangle rectangle;
    rectangle.area();
    // rectangle.perimeter();
    Triangle triangle;
    triangle.area();
    // triangle.perimeter();
}