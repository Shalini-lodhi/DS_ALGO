void postTraversal(Node* root)
{
  if(root==NULL) return;
  postTraversal(root->left);
  postTraversal(root->right);
  cout<<root->data<<" ";
}
