int height(Node * root)
    {
    if(root)
        return 1+ max(height(root->left),height(root->right));
    }

    int sumOfLongRootToLeafPath(Node* root)
    {
        if (root)
        {
        if(height(root->left)>height(root->right))
            return root->data + sumOfLongRootToLeafPath(root->left);
        else if(height(root->left)<height(root->right))
            return root->data +sumOfLongRootToLeafPath( root->right);
        else
            return root->data+max(sumOfLongRootToLeafPath(root->left),sumOfLongRootToLeafPath( root->right));
        }
    }
