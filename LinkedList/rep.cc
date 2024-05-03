#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    // Node()
    // {
    //     next = NULL;
    // }
};
int main()
{
    Node *node1, *node2, *node3;
    // calloc or malloc
    node1 = (Node *)malloc(sizeof(Node *));
    node1->val = 10;
    node1->next = NULL;
    node2 = (Node *)malloc(sizeof(Node *));
    node2->val = 20;
    node2->next = NULL;
    node3 = (Node *)malloc(sizeof(Node *));
    node3->val = 30;
    node3->next = NULL;
    node1->next = node2;
    node2->next = node3;
    while (node1 != NULL)
    {
        cout << node1->val << " ";
        node1 = node1->next;
    }
    // node3->next = node1;
}