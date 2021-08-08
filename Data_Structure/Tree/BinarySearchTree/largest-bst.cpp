    bool isBST(Node *root, int min, int max)
    {
        if(root == NULL) return true;
        if(root->data < min || root->data > max) return false;
        return (isBST(root->left, min, root->data -1) && (isBST(root->right, root->data+1, max)));
    }
    int postorder(Node *root, int &ans)
    {
        if(root == NULL) return 0;
        int ls = postorder(root->left, ans);
        int rs = postorder(root->right, ans);
        if(isBST(root, INT_MIN, INT_MAX))
        ans = max(ans, ls+rs+1); 
        return ls+rs+1;
    }
    int largestBst(Node *root)
    {
        int ans =0;
        postorder(root, ans);
        return ans;
    }
