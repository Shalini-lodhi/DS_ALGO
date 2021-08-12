//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(!head) return 0;
        while(head){
            if(head->data == -1) return 1;
            else{
                head->data =-1;
                head=head->next;
            }
        }
        return 0;
    }
};
