#include <iostream>
using namespace std;
namespace custom1
{
    int a = 10;
    void fun()
    {
        std::cout << a << std::endl;
    }
};
namespace custom2
{
    int a = 15;
};
int main(int size, char *arguements[]) // If you want to take input from command line
{
    for (int i = 0; i < size; i++)
    {
        cout << arguements[i] << " ";
    }
}