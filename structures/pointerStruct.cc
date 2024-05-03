#include <iostream>
using namespace std;
struct Student
{
    string name;
    int id;
    int cl;
    Student *q;
};
int main()
{
    // Student *student; // ->(arrow operator) - to access structure variable
    // int a = 10;
    Student student1;
    Student student2;
    student1.name = "abc";
    student2.name = "xyz";
    student2.id = 2;
    student1.q = &student2;
    // cout << ((student1.q)->name);
    cout << (student1.q)->id;
    // cout << "Referenced: " << student1->p << endl;
    // cout << "Dereferenced: " << *(student1->p) << endl;
}