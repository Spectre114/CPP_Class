#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    int index;
    cout << "Enter the index: ";
    cin >> index;
    int temp = index;
    string find;
    cout << "Enter the word to find: ";
    cin >> find;
    int stepsLeft = 0;
    int stepsRight = 0;
    // Right
    while (str[index] != find)
    {
        index++;
        index = index % str.size();
        stepsRight++;
    }
    // cout << stepsRight << endl;
    index = temp;
    // Left
    while (str[index] != find)
    {
        index--;
        if (index < 0)
            index = n - 1;
        stepsLeft++;
    }
    cout << min(stepsLeft, stepsRight);
}