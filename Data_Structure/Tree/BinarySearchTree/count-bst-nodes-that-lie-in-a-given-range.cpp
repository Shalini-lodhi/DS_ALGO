void sol(Node *root,int l,int  h,int& count)
    {
        if(root == NULL) return ;
        if(root->data >=l && root->data <=h)
           { count++;}
           
        sol(root->left, l, h, count);
        sol(root->right, l, h, count);
    }
    int getCount(Node *root, int l, int h)
    {
        int count=0;
        sol(root, l, h, count);
        return  count;
    }
  
