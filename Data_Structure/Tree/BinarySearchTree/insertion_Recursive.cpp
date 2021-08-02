//https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1#
Node* insert(Node* root, int data)
{
        if(root==NULL)
        {
            Node* root =new Node(data);
            return root;
        }
        if(root->data<data) 
            root->right=insert(root->right,data);
        if(root->data>data)
            root->left=insert(root->left,data);
        return root;
}
