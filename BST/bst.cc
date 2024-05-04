#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    Node *left;
    char val;
    Node *right;
};
Node *createRoot(Node *root)
{
    char value;
    cout << "Enter the value to insert: ";
    cin >> value;
    Node *p = (Node *)malloc(sizeof(Node *));
    p->left = NULL;
    p->val = value;
    p->right = NULL;
    root = p;
    return root;
}
void insertBST(Node *root, char value)
{

    if (value < root->val)
    {
        if (root->left == NULL)
        {
            Node *p = (Node *)malloc(sizeof(Node *));
            p->left = NULL;
            p->val = value;
            p->right = NULL;
            root->left = p;
        }
        else
            insertBST(root->left, value);
    }
    else
    {
        if (root->right == NULL)
        {
            Node *p = (Node *)malloc(sizeof(Node *));
            p->left = NULL;
            p->val = value;
            p->right = NULL;
            root->right = p;
        }
        else
            insertBST(root->right, value);
    }
}
void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->val << " ";
    }
}
int main()
{
    Node *root = NULL;
    int i = 0;
    root = createRoot(root);
    while (i++ < 4)
    {
        char value;
        cout << "Enter the value to insert: ";
        cin >> value;
        insertBST(root, value);
    }
    postOrder(root);
}