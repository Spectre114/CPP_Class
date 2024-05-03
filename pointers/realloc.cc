#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p;
    p = (int *)calloc(sizeof(int), 5);
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }
    p = (int *)realloc(p, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        cout << *(p + i) << " ";
    }
}