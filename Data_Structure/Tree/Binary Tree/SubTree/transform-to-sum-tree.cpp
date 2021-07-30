void toSumTree(Node *node)
    {
        // if(node==NULL) return;
        node -> data = 0;
        if(node -> left)
        {
            node -> data += node -> left -> data;
            toSumTree(node -> left);
            node -> data += node -> left -> data;
        }
        if(node -> right)
        {
            node -> data += node -> right -> data;
            toSumTree(node -> right);
            node -> data += node -> right -> data;
        }
    }
