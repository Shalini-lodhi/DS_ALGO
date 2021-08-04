//https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#
class Solution
{
public:
    bool search(Node* root,int data){
        if(root==NULL)
            return false;
        if(root->data==data)
            return true;
        else if(root->data>data)
            search(root->left,data);
        else
            search(root->right,data);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        if(root1==NULL)
            return 0;
        else if(search(root2,x-root1->data))
            return 1+countPairs(root1->left,root2,x)+countPairs(root1->right,root2,x);
        else
            return countPairs(root1->left,root2,x)+countPairs(root1->right,root2,x);
    
    }
};
