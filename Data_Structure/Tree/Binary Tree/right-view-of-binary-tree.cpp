void solver(Node *root, vector<int> &res,int level,int& max_level){
    if(root==NULL) return;
    if(max_level<level){
        res.push_back(root->data);
        max_level=level;
    }
    solver(root->right, res, level+1, max_level);
    solver(root->left, res, level+1, max_level);
}
vector<int> rightView(Node *root)
{
   vector<int> res;int max_level=0;
   solver(root, res, 1, max_level);
   return res;
}
