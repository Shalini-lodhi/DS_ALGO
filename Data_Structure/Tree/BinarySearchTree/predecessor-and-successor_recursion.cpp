//https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

    if(!root) return;
    if(root->key<key) {
        pre=root;
        findPreSuc(root->right,pre,suc,key);
        return;
    }
    else if(root->key>key)
    {
        suc=root;
        findPreSuc(root->left,pre,suc,key);
        return;
    }
    else// if(root->key==key)
    {
        findPreSuc(root->left,pre,suc,key);
        findPreSuc(root->right,pre,suc,key);
    }

}
