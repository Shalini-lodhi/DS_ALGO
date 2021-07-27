void left_view(TreeNode *node, int& max_level, int level)
{
    if (node == NULL)
       return;
    if (max_level < level)
    {
        cout << node->val << " ";
        max_level = level;
    }
    left_view(node->left, max_level, level + 1);
    left_view(node->right, max_level, level + 1);
}

void right_view(TreeNode *node, int& max_level, int level)
{
    if (node == NULL)
       return;
    if (max_level < level)
    {
        cout << node->val << " ";
        max_level = level;
    }
    right_view(node->right, max_level, level + 1);
    right_view(node->left, max_level, level + 1);
}
int main()
{
    TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->right->right = newNode(5);
    root->left->right->right->right = newNode(6);

    int max_level = -1;
    cout << "Left View of the tree (Recursive method): ";
    left_view(root, max_level, 0);
    cout << endl;
    
    max_level = -1;
    cout << "Right View of the tree (Recursive method): ";
    right_view(root, max_level, 0);
    cout << endl;

    return 0;
}
