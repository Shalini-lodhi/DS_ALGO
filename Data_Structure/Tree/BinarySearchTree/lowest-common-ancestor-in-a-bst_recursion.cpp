//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1#

Node* LCA(Node *root, int p, int q)
{
   if((p<=root->data && q>=root->data) || (p >=root->data && q<=root->data)) return root;
   else if(p< root->data && q <root->data)
        return LCA(root->left, p, q);
    else
        return LCA(root->right, p, q);
}
