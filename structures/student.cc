// Array of structures
#include <iostream>
using namespace std;
struct Student
{
    string name;
    int id;
    int cl;
};
int main()
{
    Student student[2];
    for (int i = 0; i < 2; i++)
    {
        string name;
        int id, cl;
        cin >> name >> id >> cl;
        student[i].name = name;
        student[i].id = id;
        student[i].cl = cl;
    }
    for (int i = 0; i < 2; i++)
    {
        string name;
        int id, cl;
        name = student[i].name;
        id = student[i].id;
        cl = student[i].cl;
        cout << "Details of Student " << i + 1 << "\nName: " << name << "\nID: " << id << "\nClass: " << cl << endl;
    }
}