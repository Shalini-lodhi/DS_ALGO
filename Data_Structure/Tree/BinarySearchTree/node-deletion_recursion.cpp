//https://leetcode.com/problems/delete-node-in-a-bst/

int min(TreeNode* root){
        while(root -> left != NULL)
            root = root -> left;
        return root -> val;
    }
    
    TreeNode* deleteIt(TreeNode* root){
        if(root -> left == NULL and root -> right == NULL)
            return NULL;
        if(root -> left == NULL and root -> right != NULL)
            return root -> right;
        if(root -> left != NULL and root -> right == NULL)
            return root -> left;
        int rightMin = min(root -> right);
        root -> val = rightMin;
        root -> right = deleteNode(root -> right, rightMin);
        return root;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return NULL;
        if(root -> val > key)
            root -> left = deleteNode(root -> left, key);
        else if(root -> val < key)
            root -> right = deleteNode(root -> right, key);
        else 
            root = deleteIt(root);
        return root;
    }
