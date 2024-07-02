#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 1e7;
    vector<int> prime(N + 1, 1);
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
            cout << i << " is prime" << endl;
        else
            cout << i << " is notprime" << endl;
    }
}