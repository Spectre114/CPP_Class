#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int n = str.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i + 1] == '\t' || i == n - 1))
        {
            count++;
        }
    }
    cout << "Number of characters:" << count << endl;
}