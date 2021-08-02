//https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1

class Solution
{
public:
    Node* n=NULL;
    void populateNext(Node *root)
    {
        if(root==NULL) return;
        populateNext(root->right);
        root->next=n;
        n=root;
        populateNext(root->left);
    }
};
