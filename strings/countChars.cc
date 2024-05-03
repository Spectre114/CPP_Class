#include <iostream>
#include <string>
using namespace std;
int isVow(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;
}
int isCons(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0;
}
int main()
{
    string str;
    int vow = 0, cons = 0, digits = 0, space = 0;
    cout << "Enter first string: ";
    getline(cin, str);
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (isVow(str[i]))
        {
            vow++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else if (isCons(str[i]))
        {
            cons++;
        }
    }
    cout << "Vowels: " << vow << "\nConsonents: " << cons << "\nDigits: " << digits << "\nSpaces: " << space << endl;
}