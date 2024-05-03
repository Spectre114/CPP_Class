#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter string 1:";
    getline(cin, str1);
    cout << "Enter string 2:";
    getline(cin, str2);
    int i = 0;
    for (; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    cout << str1;
}