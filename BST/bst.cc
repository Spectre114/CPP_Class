#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left;
    int val;
    Node *right;
};
Node *createRoot(Node *root)
{
    int value;
    cout << "Enter the value to insert: ";
    cin >> value;
    Node *p = (Node *)malloc(sizeof(Node *));
    p->left = NULL;
    p->val = value;
    p->right = NULL;
    root = p;
    return root;
}
void insertBST(Node *root, int value)
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
void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<vector<int>> level;
    while (!q.empty())
    {
        vector<int> l;
        int SIZE = q.size();
        for (int i = 0; i < SIZE; i++)
        {
            Node *node = q.front();
            q.pop();
            l.push_back(node->val);
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
        level.push_back(l);
    }
    for (int i = 0; i < level.size(); i++)
    {
        for (int j = 0; j < level[i].size(); j++)
        {
            cout << level[i][j] << " ";
        }
        cout << endl;
    }
}
Node *inorderPre(Node *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
Node *Delete(Node *root, int value)
{
    Node *inPre;
    if (root == NULL)
        return NULL;
    if (root->left == NULL && root->right == NULL)
    {
        delete root;
        return NULL;
    }
    if (value < root->val)
    {
        root->left = Delete(root->left, value);
    }
    else if (value > root->val)
    {
        root->right = Delete(root->right, value);
    }
    else
    {
        inPre = inorderPre(root->left);
        root->val = inPre->val;
        root->left = Delete(root->left, inPre->val);
    }
    return root;
}
int main()
{
    Node *root = NULL;
    int i = 0;
    root = createRoot(root);
    while (i++ < 6)
    {
        int value;
        cout << "Enter the value to insert: ";
        cin >> value;
        insertBST(root, value);
    }
    levelOrder(root);
    int value;
    cout << "Enter the value to delete: ";
    cin >> value;
    root = Delete(root, value);
    levelOrder(root);
}