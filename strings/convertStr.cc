#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string:";
    getline(cin, str);
    int n = str.size();
    int i = 1;
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[i] = str[i] - 32;
    }
    for (; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str;
}