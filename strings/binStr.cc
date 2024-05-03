#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter binary string: ";
    getline(cin, str);
    stack<char> st;
    int isOne = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
        {
            isOne++;
        }
        if (!st.empty() && isOne && st.top() == '0' && str[i] == '0')
        {
            st.pop();
            st.pop();
            isOne--;
            continue;
        }
        st.push(str[i]);
    }
    if (st.empty())
        cout << "yes";
    else
        cout << "no";
}