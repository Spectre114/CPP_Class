// size of string

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string:";
    getline(cin, str);
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        cnt++;
    }
    cout << cnt;
}