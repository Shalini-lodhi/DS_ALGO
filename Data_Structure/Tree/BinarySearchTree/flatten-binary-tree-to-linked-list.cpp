//https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/0/?fbclid=IwAR0CbQ8IloSpaUDvtNo7mmvHN4bCoBd8XFQyA9T2eniTjWRE7g6LPp1TcMI

Node* cur ;
    void dfs(Node* root){
        if(root==NULL)return ;
        Node* lef = root->left , *righ = root->right ;
        cur->left = NULL ;
        cur->right = root ;
        cur = cur->right ;
        dfs(lef) ;
        dfs(righ ) ;
    }
    void flatten(Node *root)
    {
        cur=root;
        if(root==NULL)return ;
        if(root->left==NULL&& root->right==NULL)return ;
        dfs(root);
    }
