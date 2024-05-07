// #include <iostream>
// using namespace std;
// class FunOverload
// {
// public:
//     void area(int a, int b)
//     {
//         cout << "Area of Circle: " << a * b << endl;
//     }
//     void area(float a)
//     {
//         cout << "Area of Rectangle: " << a << endl;
//     }
// };
// int main()
// {
//     FunOverload fo;
//     fo.area(4.5, 5.4);
//     fo.area(10, 20);
// }

// class Animal
// functions dog and cat which prints the sound of the animal
// #include <iostream>
// using namespace std;
// class Animal
// {
// public:
//     void dog()
//     {
//         cout << "Bark Bark" << endl;
//     }
//     void cat()
//     {
//         cout << "Meow Meow" << endl;
//     }
// };
// int main()
// {
//     Animal an;
//     an.dog();
//     an.cat();
// }
#include <iostream>
using namespace std;
class Shape
{
public:
    void shape(int l, int b)
    {
        cout << "Rectangle" << endl;
        cout << "Length: " << l << "\nBreadth: " << b << endl;
    }
    void shape(int r)
    {
        cout << "Circle" << endl;
        cout << "Radius: " << r << endl;
    }
};
int main()
{
    Shape sh;
    sh.shape(4, 5);
    sh.shape(6);
}

