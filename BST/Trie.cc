#include <bits/stdc++.h>
using namespace std;
class Trie
{
    Trie *child[26];
    int flag = 0;

public:
    Trie()
    {
        for (int i = 0; i < 26; i++)
        {
            child[i] = nullptr;
        }
    }
    void insert(string str)
    {
        Trie *temp = this;
        for (size_t i = 0; i < str.size(); i++)
        {
            int ind = str[i] - 'a';
            if (temp->child[ind] == nullptr)
            {
                temp->child[ind] = new Trie();
            }
            temp = temp->child[ind];
        }
        temp->flag = 1;
    }
    bool search(string pat)
    {
        Trie *temp = this;
        for (size_t i = 0; i < pat.size(); i++)
        {
            int ind = pat[i] - 'a';
            if (temp->child[ind] == nullptr)
            {
                return false;
            }
            temp = temp->child[ind];
        }
        return true;
        // return temp->flag == 1;
    }
};
int main()
{
    string str;
    cin >> str;
    Trie *trie = new Trie();
    trie->insert(str);
    string pat;
    cout << "Enter the pattern to search: ";
    cin >> pat;
    cout << (trie->search(pat) ? "Present" : "Not Present");
}