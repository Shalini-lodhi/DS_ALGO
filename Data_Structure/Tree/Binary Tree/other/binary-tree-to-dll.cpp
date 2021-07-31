// https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1#
void bDLL(Node* root, Node* &head, Node* &prev)
    {
        if(!root) return;
        bDLL(root->left,head,prev);
        root->left = prev;
        if(!prev)   head = root;
        else    prev->right = root;
        prev = root;
        bDLL(root->right,head,prev);
    }
    Node * bToDLL(Node *root)
    { 
        Node* head = NULL;
        Node* prev=NULL;
        bDLL(root,head,prev);
        return head;
    }
