//https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1

class Solution
{
    public:
    //Function to count nodes of a linked list.
   int length(struct Node* root, int len){
    if(!root) return 0;
    len= 1 + length(root->next, len);
    }
    int getCount(struct Node* head){
        int len=0;
        return length(head, len);
    }
};
