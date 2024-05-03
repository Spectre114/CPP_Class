#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *p;
    p = (int *)calloc(sizeof(int), n); //->array
    for (int i = 0; i < n; i++)
        cin >> *(p + i);
    cout << "Before: " << p << endl;
    for (int i = 0; i < n; i++)
        cout << *(p + i);
    cout << "\nAfter: " << p << endl;
}