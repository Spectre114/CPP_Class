// Convert upper case letters in a string to lower case letters and lower case to upper case
// Hello World -> hELLO wORLD
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string:";
    getline(cin, str);
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    cout << str;
}