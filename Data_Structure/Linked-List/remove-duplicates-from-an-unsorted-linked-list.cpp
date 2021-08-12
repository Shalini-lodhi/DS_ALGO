//https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1#

 void Duplicates(Node* start)
{
     unordered_set<int> seen;
    Node *curr = start;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
           prev->next = curr->next;
           delete (curr);
        }
        else
        {
           seen.insert(curr->data);
           prev = curr;
        }
        curr = prev->next;
    }
}
    Node * removeDuplicates( Node *head) 
    {
        Duplicates(head);
        return head;
    }
