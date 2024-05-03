#include <iostream>
using namespace std;
int checkArmstrong(int num)
{
    int sum = 0;
    int x = num;
    while (num != 0)
    {
        int rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }
    return sum == x;
}
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    checkArmstrong(num) == 1 ? cout << "Armstrong Number" : cout << "Not Armstrong Number";
}