Node* lca(Node* node ,int n1 ,int n2 )
    {
       if (node == NULL)
       return NULL;
    if (node->data == n1 || node->data == n2)
       return node;

    Node *left = lca(node->left, n1, n2);
    Node *right = lca(node->right, n1, n2);
    if (left != NULL && right != NULL)
        return node;
    else if (left != NULL)
        return left;
    else
        return right;
    }
