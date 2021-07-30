 vector<vector<int> > revec;
    void PreTravesal(TreeNode* node,int level)
    {
        if(node!=nullptr)
        {
            if(level>=revec.size())
            {
                vector<int> newlevel;
                revec.push_back(newlevel);        
            }
            revec[level].push_back(node->val);
            PreTravesal(node->left,level+1);
            PreTravesal(node->right,level+1);
             
        }
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        int k=0;
        PreTravesal(root,k);
        return revec;
        
    }
