#include <iostream>
#include <map>
using namespace std;

struct TreeNode
{
    char val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

void top_view(TreeNode *node, map<int, pair<char,int>>& m, int dist, int level)
{
    if (node == NULL)
       return;
    if (m.count(dist) == 0 || m[dist].second > level)
        m[dist] = make_pair(node->val, level);

    top_view(node->left, m, dist-1, level + 1);
    top_view(node->right, m, dist+1, level + 1);
}

void bottom_view(TreeNode *node, map<int, pair<char,int>>& m, int dist, int level)
{
    if (node == NULL)
       return;
    if (m.count(dist) == 0 || m[dist].second < level)
        m[dist] = make_pair(node->val, level);

    bottom_view(node->left, m, dist-1, level + 1);
    bottom_view(node->right, m, dist+1, level + 1);
}

int main()
{
    TreeNode *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    map<int, pair<char,int>> m;
    cout << "Top View of the tree (Recursive method): ";
    top_view(root, m, 0, 0);
    for (auto i : m)
        cout << i.second.first << " ";
    cout << endl;
    
    m.clear();
    cout << "Bottom View of the tree (Recursive method): ";
    bottom_view(root, m, 0, 0);
    for (auto i : m)
        cout << i.second.first << " ";
    cout << endl;

    return 0;
}
