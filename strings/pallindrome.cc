#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string :";
    getline(cin, str);
    int flag = 0;
    int n = str.size();
    for (int i = 0; i <= n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "The string is not pallindrome";
    }
    else
    {
        cout << "The string is pallindrome";
    }
}