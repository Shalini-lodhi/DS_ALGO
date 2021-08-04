//https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1#

bool solve(Node *root,int min,int max){
        if(root==NULL)return false;
        int t = root->data;
        if(max==1 || min==max)return true;
        bool l = solve(root->left,min,t-1);
        bool r = solve(root->right,t+1,max);
        return (l||r);
    }
    bool isDeadEnd(Node *root)
    {
        int min = INT_MIN;
        int max = INT_MAX;
        
        return solve(root,min,max);
    }
