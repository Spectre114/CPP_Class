#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string:";
    getline(cin, str);
    int n = str.size();
    int temp = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    cout << str;
}