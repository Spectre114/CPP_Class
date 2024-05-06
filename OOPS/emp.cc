#include <iostream>
using namespace std;
class Employee
{
    string empName;
    int empId;
    string deptName;

public:
    void getDetails(int count)
    {
        cout << "Enter Employee " << count << " Details";
        cout << "\nEnter Employee ID:";
        cin >> empId;
        cout << "\nEnter Employee Name:";
        cin >> empName;
        cout << "\nEnter Department Name:";
        cin >> deptName;
        cout << "\nEmployee " << count << " Details are saved" << endl;
    }
    void setDetails(int count)
    {
        cout << "\nEmployee " << count << " Details";
        cout << "\nEmployee ID:" << empId;
        cout << "\nEmployee Name:" << empName;
        cout << "\nEmployee Department:" << deptName;
    }
    int search(int target)
    {
        int flag = 0;
        if (empId == target)
        {
            setDetails(empId);
            flag = 1;
        }
        return flag;
    }
};
int main()
{
    int num_of_emp, count;
    cout << "\nPlease enter the number of employees(Max 10):";
    cin >> num_of_emp;
    Employee emp[num_of_emp];
    for (count = 0; count < num_of_emp; count++)
    {
        emp[count].getDetails(count + 1);
        emp[count].setDetails(count + 1);
    }
    int target;
    cout << "\nEnter the ID to be searched:";
    cin >> target;
    int flag = 0;
    for (int i = 0; i < num_of_emp; i++)
    {
        flag = emp[i].search(target);
        if (flag == 1)
            break;
    }
    if (!flag)
        cout << "ID not found" << endl;
}