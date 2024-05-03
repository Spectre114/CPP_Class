#include <bits/stdc++.h>
using namespace std;
void heapify(int a[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] < a[largest])
        largest = l;
    if (r < n && a[r] < a[largest])
        largest = r;
    if (largest != i)
    {
        swap(a[largest], a[i]);
        heapify(a, n, largest);
    }
}
int main()
{
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n / 2 - 1; i >= 0; --i)
        heapify(a, n, i);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
