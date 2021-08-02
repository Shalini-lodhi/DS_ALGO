//https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1

int minValue(Node* root)
{
    if(root==NULL) return root->data;
    else if(!root->left) return root->data;
    else minValue(root->left);
}
