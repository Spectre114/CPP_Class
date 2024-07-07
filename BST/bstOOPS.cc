#include <bits/stdc++.h>
using namespace std;
class BST
{
public:
    vector<BST *> vec;
    BST *left;
    int val;
    BST *right;

    BST(int value)
    {
        left = nullptr;
        val = value;
        right = nullptr;
    }

    void insert(int value)
    {
        if (value < val)
        {
            if (left == nullptr)
            {
                left = new BST(value);
            }
            else
            {
                left->insert(value);
            }
        }
        else
        {
            if (right == nullptr)
            {
                right = new BST(value);
            }
            else
            {
                right->insert(value);
            }
        }
    }

    void inOrder(BST *root)
    {
        if (root)
        {
            inOrder(root->left);
            vec.push_back(root);
            inOrder(root->right);
        }
    }
    BST *balance(int l, int h)
    {
        if (l > h)
        {
            return nullptr;
        }

        int mid = l + (h - l) / 2;
        BST *newNode = vec[mid];
        newNode->left = balance(l, mid - 1);
        newNode->right = balance(mid + 1, h);

        return newNode;
    }
    void levelOrder()
    {
        queue<BST *> q;
        BST *temp = this;
        q.push(temp);
        vector<int> level;
        cout << temp->val << endl;
        while (!q.empty())
        {
            int SIZE = q.size();
            for (int i = 0; i < SIZE; i++)
            {
                auto node = q.front();
                q.pop();
                if (node->left != nullptr)
                {
                    q.push(node->left);
                    cout << node->left->val << " ";
                }
                if (node->right != nullptr)
                {
                    q.push(node->right);
                    cout << node->right->val << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    BST *bst = new BST(10);
    bst->insert(11);
    bst->insert(12);
    bst->insert(13);
    bst->insert(14);
    cout << "\nLevel Order Traversal Before:- " << endl;
    bst->levelOrder();
    bst->inOrder(bst);
    bst = bst->balance(0, bst->vec.size() - 1);
    cout << "\nLevel Order Traversal After:- " << endl;
    bst->levelOrder();
    return 0;
}