Node* lca(Node* node ,int n1 ,int n2 )
    {
       if (node == NULL)
       return NULL;
    if (node->data == n1 || node->data == n2)
       return node;

    Node *left = lca(node->left, n1, n2);
    Node *right = lca(node->right, n1, n2);
    if (left != NULL && right != NULL)
        return node;
    else if (left != NULL)
        return left;
    else
        return right;
    }
int distanceFromParentToNode(Node* node, int val, int distance) {
    if (node == NULL) {
      return -1;
    }
    if (node->data == val) {
      return distance;
    }
    int d = distanceFromParentToNode(node->left, val, distance + 1);
    if (d != -1) {
      return d;
    }
    d = distanceFromParentToNode(node->right, val, distance + 1);
    return d;
  }
int findDist(Node* root, int a, int b) {
    Node* ans= lca(root, a, b);
    if(lca==NULL)
        return -1;
    int d1=distanceFromParentToNode(ans, a, 0);
    int d2=distanceFromParentToNode(ans, b, 0);
    return d1+d2;
}
