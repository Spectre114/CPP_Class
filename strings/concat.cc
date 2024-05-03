#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter string 1: ";
    getline(cin, str1);
    // string str2;
    cout << "Enter string 2: ";
    getline(cin, str2);
    for (int i = 0; i < str2.size(); i++)
    {
        str1 += str2[i];
    }
    cout << str1;
}
// find the size of string
// copy one string to another.
// check whether a string is a pallindrome
// freq of each character without using stl