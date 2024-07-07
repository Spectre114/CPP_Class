#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        res ^= nums;
    }
    return res;
}