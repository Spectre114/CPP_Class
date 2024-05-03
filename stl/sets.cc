// Sets - No repeating elements - sorted
// insert, pop_back
// Unordered_set - No repeating elements - Not sorted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> st;
    st.insert(4);
    st.insert(2);
    st.insert(3);
    st.insert(2);

    for (auto it : st)
    {
        cout << it << " ";
    }
    // st.find
    int x = 2;
    if (st.find(x) == st.end())
        cout << "false";
}
// Queue, stack, priority_queue