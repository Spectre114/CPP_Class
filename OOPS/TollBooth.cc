#include <iostream>
using namespace std;
class TollBooth
{
    int payingCar, nonPayingCar;
    double amt;

public:
    TollBooth()
    {
        payingCar = 0;
        nonPayingCar = 0;
        amt = 0;
    }
    void payingcar()
    {
        payingCar++;
        amt += 2;
    }
    void nonpayingcar()
    {
        nonPayingCar++;
        amt += 5;
    }
    void display()
    {
        cout << "Total number of Paying cars added: " << payingCar << endl;
        cout << "Total number of Non Paying cars added: " << nonPayingCar << endl;
        cout << "Amount of fine: " << amt << endl;
    }
};
int main()
{
    char c = 'Y';
    int ch;
    TollBooth tb;
    do
    {
        cout << "\n1: For paying cars\n2: For Nonpaying cars\n";
        cout << "\nEnter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            tb.payingcar();
            cout << "Paying Car Added" << endl;
            break;
        }
        case 2:
        {
            tb.nonpayingcar();
            cout << "Non Paying Car Added" << endl;
            break;
        }
        }
        cout << "\nDo you want to continue adding more cars?(Y/N): ";
        cin >> c;
    } while (c == 'Y' || c == 'y');
    tb.display();
    return 0;
}