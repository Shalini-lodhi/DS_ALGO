void preOrder(struct Node* root){
  if(root==NULL) return;
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
