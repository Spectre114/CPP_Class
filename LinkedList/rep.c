#include <stdio.h>
#include <stdlib.h>
// using namespace std;
typedef struct Node
{
    int val;
    struct Node *next;
} node;
int main()
{
    node *head;
    // calloc or malloc
    head = (node *)malloc(sizeof(node *));
}