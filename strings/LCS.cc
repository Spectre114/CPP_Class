// LCS -> longest common subsequence
#include <iostream>
#include <string>
using namespace std;
int LCS(string str, string sub)
{
    int i = 0, j = 0, count = 0;
    int n = str.size();
    int m = sub.size();
    while (i < n && j < m)
    {
        if (str[i] == sub[j])
        {
            count++;
            i++;
            j++;
        }
        else
            i++;
    }
    return count;
}
int main()
{
    string str, sub;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the sub sequence to check: ";
    getline(cin, sub);
    cout << LCS(str, sub);
}