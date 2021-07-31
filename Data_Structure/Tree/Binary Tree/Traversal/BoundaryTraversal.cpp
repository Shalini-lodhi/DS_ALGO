class Solution {
public:
vector<int> bound;
void print_left_boundary(Node* node)
{
    if (node == NULL)
        return;
    if (node->left)
    {
        bound.push_back(node->data);
        print_left_boundary(node->left);
    }
    else if (node->right)
    {
        bound.push_back(node->data);
        print_left_boundary(node->right);
    }
}

void print_right_boundary(Node* node)
{
    if (node == NULL)
        return;
    if (node->right)
    {
        print_right_boundary(node->right);
        bound.push_back(node->data);
    }
    else if (node->left)
    {
        print_right_boundary(node->left);
        bound.push_back(node->data);
    }
}

void print_leaves(Node* node)
{
    if (node == NULL)
        return;

    print_leaves(node->left);
    if (node->left == NULL && node->right == NULL)
        bound.push_back(node->data);
    print_leaves(node->right);
}

void boundary_traversal(Node *root)
{
    if (root == NULL)
       return;
    bound.push_back(root->data);
    print_left_boundary (root->left);
    print_leaves (root->left);
    print_leaves (root->right);
    print_right_boundary (root->right);
}
    vector <int> printBoundary(Node *root)
    {
        boundary_traversal(root);
        return bound;
    }
};
