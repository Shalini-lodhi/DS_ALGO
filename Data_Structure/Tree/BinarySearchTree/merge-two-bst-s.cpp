//https://practice.geeksforgeeks.org/problems/merge-two-bst-s/1#

class Solution
{
    public:
    void inorder(Node*root,vector<int>&v){
        if(!root)return ;
             inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    void merge(vector<int> v1, vector<int> v2, vector<int> &v){
        for(int i=0; i<v1.size(); i++){
            v.push_back(v1[i]);
        }
        for(int i=0; i<v2.size(); i++){
            v.push_back(v2[i]);
        }
        sort(v.begin(), v.end());
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int>v1,v2;
        inorder(root1,v1); //taking inorder of BST-1
        inorder(root2,v2); //taking inorder of BST-2
        vector<int>v;
        merge(v1, v2, v); //merge both BSTs and return sorted form of it
        return v;
    }
};
