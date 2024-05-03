#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    // push(), pop(), empty(), top();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while (!st.empty())
    {
        int x = st.top();
        cout << x << " ";
        st.pop();
    }
}