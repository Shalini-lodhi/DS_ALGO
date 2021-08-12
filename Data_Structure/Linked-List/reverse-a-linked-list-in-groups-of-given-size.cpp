//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        struct node* cur=head,*nxt=NULL,*prv=NULL; 
        int c=0;
        while(cur && c<k){
            nxt=cur->next;
            cur->next=prv;
            prv=cur;
            cur=nxt;     
            c++;
        }
        if(nxt) 
            head->next=reverse(nxt,k);
            
        return prv;
    }
};
