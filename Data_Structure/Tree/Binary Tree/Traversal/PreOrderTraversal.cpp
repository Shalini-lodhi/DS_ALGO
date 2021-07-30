void PreOrder(struct Node *root)
{
	if (root == NULL)     return;
    stack<Node*> st;
    Node* curr = root;
    while (!st.empty() || curr != NULL) {
        while (curr != NULL) {
            cout << curr->data << " ";
            if (curr->right)
                st.push(curr->right); 
            curr = curr->left;
        }
        if (st.empty() == false) {
            curr = st.top();
            st.pop();
        }
    }
}
